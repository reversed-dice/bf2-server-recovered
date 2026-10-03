// Donor: the SAME local-string destruction, in the layouts the compiler
// actually picks.
//
// The first pass of donors reproduced the top unknown block down to one
// instruction: the corpus block ends `CMP RBX,RDX / JE`, the donor produced
// `CMP RAX,RBX / JNE`. Same test, opposite layout -- the dispose is on the
// fallthrough path in the target and on the taken path in the donor. Register
// names are masked by the phrase table, branch polarity is not, so the shapes
// stayed strangers.
//
// Polarity follows what comes after the scope, so the variants below differ
// only in that: a scope that ends the function, a scope followed by more work,
// a scope inside a branch, and several strings alive at once.
#include <string>

namespace donors {

// Scope followed by more work: the dispose sits in the middle of the function
// and the compiler jumps OVER it, which is the target's layout.
void string_scope_then_work(const char* in, int* out, int n)
{
    {
        std::string s(in);
        out[0] = (int)s.size();
    }
    for (int i = 1; i < n; ++i)
        out[i] = i;
}

void string_scope_then_store(const char* in, void* self)
{
    {
        std::string s(in);
        *reinterpret_cast<unsigned int*>((char*)self + 0x20) = (unsigned int)s.size();
    }
    *reinterpret_cast<unsigned int*>((char*)self + 0x24) = 0;
}

void string_scope_in_branch(const char* in, void* self, bool flag)
{
    if (flag) {
        std::string s(in);
        *reinterpret_cast<unsigned int*>((char*)self + 0x28) = (unsigned int)s.size();
    }
    *reinterpret_cast<unsigned int*>((char*)self + 0x2c) = 1;
}

void string_two_scopes_then_work(const char* a, const char* b, int* out)
{
    {
        std::string first(a);
        out[0] = (int)first.size();
    }
    {
        std::string second(b);
        out[1] = (int)second.size();
    }
    out[2] = 0;
}

void string_three_alive(const char* a, const char* b, const char* c, int* out)
{
    std::string first(a);
    std::string second(b);
    std::string third(c);
    out[0] = (int)(first.size() + second.size() + third.size());
}

void string_member_assign_then_work(void* self, const char* in)
{
    {
        std::string tmp(in);
        reinterpret_cast<std::string*>((char*)self + 0x30)->assign(tmp);
    }
    *reinterpret_cast<unsigned int*>((char*)self + 0x40) = 0;
}

// The same scope, with the dispose marked unlikely. The project's destructor
// recipes turn on exactly this lever, so the table should know both spellings.
void string_scope_expect_empty(const char* in, int* out, int n)
{
    {
        std::string s(in);
        out[0] = (int)s.size();
    }
    if (__builtin_expect(n > 0, 1)) {
        for (int i = 1; i < n; ++i)
            out[i] = i;
    }
}

void string_loop_body(const char* const* names, int count, int* out)
{
    for (int i = 0; i < count; ++i) {
        std::string s(names[i]);
        out[i] = (int)s.size();
    }
}

}  // namespace donors
