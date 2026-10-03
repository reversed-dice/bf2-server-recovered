// Donor: the local-string dispose chain in the layout of a function with
// several live strings and work between them.
//
// The first two donors covered the scope-end dispose of 1-6 strings written
// back to back. The blocks still ranked unknown on 2026-09-04 were the same
// dispose in the layout a function actually picks when strings are born at
// different points and die at scope end:
//
//     MOV RBX,QWORD PTR [0X390+RSP]   207 remaining functions
//     MOV EDX,<ADDR>                   <- sentinel materialized lazily, 32-bit
//     SUB RBX,0X18
//     CMP RDX,RBX
//     JE <ADDR>                        <- dispose on the fallthrough
//
// The sentinel is loaded per dispose site, not hoisted: each site is in a
// cold block and a destroy call in between clobbers the caller-saved
// registers, so rematerializing beats spilling. With enough live strings the
// pointers spill and the load comes off the stack. The JE/JNE polarity and
// the hoisted-vs-lazy sentinel are both on the flag axis: GCC 4.0 with
// `-fno-reorder-blocks` or `-fno-guess-branch-probability` flips the layout,
// and the donors build sweeps both, so the variants below deposit all four
// shapes in the table at once.
//
// Third shape covered here is the member-string dispose via a heap object:
// `delete h` reads each member's data pointer through the object register
// (`MOV RBX,QWORD PTR [R12]`, 101 remaining functions).
#include <string>

namespace donors {

struct Holder {
    std::string first;
    std::string second;
    std::string third;
    int flag;
};

// Two strings born at different points, work between the scopes: the first
// dispose lands mid-function, the last one at the end, and the sentinel
// materialization and the branch polarity differ between the two sites.
int chain_two(const char* a, const char* b, int n)
{
    std::string s(a);
    int r = (int)s.size();
    for (int i = 0; i < n; ++i)
        r += i;
    std::string t(b);
    r += (int)t.size();
    return r;
}

// Three strings, work interleaved with each construction.
int chain_three(const char* a, const char* b, const char* c, int n)
{
    std::string s1(a);
    int r = (int)s1.size();
    std::string s2(b);
    r += (int)s2.size();
    for (int i = 0; i < n; ++i)
        r += i;
    std::string s3(c);
    r += (int)s3.size();
    return r;
}

// A string born before a conditional return: the scope-end dispose follows
// two return paths, so the destroy block sits after both epilogues.
int chain_early_return(const char* a, int n)
{
    std::string s(a);
    int r = (int)s.size();
    if (n > 3)
        return r * 2;
    return r + n;
}

// Two scopes nested: the inner string dies mid-function, the outer one at
// the end, each with its own cold block.
int chain_nested(const char* a, const char* b, int n)
{
    int r;
    {
        std::string inner(a);
        r = (int)inner.size();
    }
    std::string outer(b);
    for (int i = 0; i < n; ++i)
        r += i;
    return r + (int)outer.size();
}

// Four strings used through member assigns: the assign destroys the old rep
// mid-function, the locals die at the end, the members die with the object
// only if it is deleted.
int chain_four_assigns(const char* x, const char* y, const char* z,
                       const char* w, Holder* h, int n)
{
    std::string s1(x), s2(y), s3(z), s4(w);
    h->first.assign(s1);
    h->second.assign(s2);
    h->third.assign(s3);
    h->flag = (int)(s4.size());
    return h->flag + n;
}

// The heap-object dispose: each member string dies via its data pointer read
// through the object register, hoisted sentinel, JNE to the cold destroy.
int delete_holder(Holder* h, int n)
{
    delete h;
    return n * 3;
}

// Same, with a local string alive alongside the deleted object: the local
// dies after the members, one more dispose site in the same function.
int delete_holder_and_local(Holder* h, const char* in, int n)
{
    std::string s(in);
    int r = (int)s.size();
    delete h;
    return r + n;
}

}  // namespace donors