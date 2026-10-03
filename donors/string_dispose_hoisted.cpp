// Donor: the local-string dispose when the sentinel lives in a REGISTER.
//
// An earlier example taught the dispose whose test reads
// `CMP RBX,<ADDR>` -- the sentinel `_S_empty_rep_storage` rematerialized at
// each site. The blocks still ranked unknown on 2026-08-28 are the same test
// written the other way:
//
//     MOV RBX,QWORD PTR [0X30+RSP]   248 remaining functions
//     SUB RBX,0X18
//     CMP R14,RBX
//     JNE <ADDR>
//
// The compared-against value is a callee-saved REGISTER, not an immediate, and
// the string data pointer comes back off the STACK. Both follow from the same
// cause: enough live strings in one function that GCC hoists the sentinel once
// and spills the pointers. One or two locals in a scope -- what the first donor
// wrote -- never produces it, which is why the shape stayed a stranger while
// the idiom itself was already covered.
//
// Third and fourth of the ranked blocks are the same test with the pointer read
// through an object (`MOV RBX,QWORD PTR [R12]`) and with the opposite branch
// polarity, so the file carries those too.
#include <string>

namespace donors {

// Six live strings: more than the callee-saved set, so the pointers spill and
// the sentinel is worth a register.
void string_six_alive(const char* const* in, int* out)
{
    std::string a(in[0]);
    std::string b(in[1]);
    std::string c(in[2]);
    std::string d(in[3]);
    std::string e(in[4]);
    std::string f(in[5]);
    out[0] = (int)(a.size() + b.size() + c.size());
    out[1] = (int)(d.size() + e.size() + f.size());
}

// Same, with work between the last use and the end of scope so the disposes
// land in the middle of the function rather than in its tail.
void string_six_alive_then_work(const char* const* in, int* out, int n)
{
    {
        std::string a(in[0]);
        std::string b(in[1]);
        std::string c(in[2]);
        std::string d(in[3]);
        std::string e(in[4]);
        std::string f(in[5]);
        out[0] = (int)(a.size() + b.size() + c.size() + d.size()
                       + e.size() + f.size());
    }
    for (int i = 1; i < n; ++i)
        out[i] = i;
}

// The pointer read through an object rather than off the stack:
// `MOV RBX,QWORD PTR [R12]`, third of the ranked blocks.
struct Holder {
    std::string first;
    std::string second;
    std::string third;
    int flag;
};

void holder_assign_three(Holder* h, const char* const* in)
{
    std::string a(in[0]);
    std::string b(in[1]);
    std::string c(in[2]);
    h->first.assign(a);
    h->second.assign(b);
    h->third.assign(c);
    h->flag = 0;
}

void holder_swap_locals(Holder* h, const char* const* in, int n)
{
    std::string a(in[0]);
    std::string b(in[1]);
    std::string c(in[2]);
    std::string d(in[3]);
    if (n > 0) {
        h->first.assign(a);
        h->second.assign(b);
    } else {
        h->first.assign(c);
        h->second.assign(d);
    }
    h->flag = n;
}

// Strings alive across a call: the call clobbers the volatile registers, so
// everything that survives it is either spilled or callee-saved -- the exact
// pressure that produces the stack-slot form of the test.
int string_across_calls(const char* const* in, int (*sink)(const char*))
{
    std::string a(in[0]);
    std::string b(in[1]);
    std::string c(in[2]);
    std::string d(in[3]);
    std::string e(in[4]);
    int total = sink(a.c_str());
    total += sink(b.c_str());
    total += sink(c.c_str());
    total += sink(d.c_str());
    total += sink(e.c_str());
    return total;
}

// A loop body holding several strings: the sentinel is hoisted out of the loop,
// which is the strongest form of the same cause.
void string_loop_three(const char* const* names, int count, int* out)
{
    for (int i = 0; i < count; ++i) {
        std::string a(names[i * 3]);
        std::string b(names[i * 3 + 1]);
        std::string c(names[i * 3 + 2]);
        out[i] = (int)(a.size() + b.size() + c.size());
    }
}

}  // namespace donors
