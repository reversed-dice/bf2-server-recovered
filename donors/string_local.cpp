// Donor: a LOCAL std::string, which the recovered corpus does not contain.
//
// The corpus is almost entirely accessors, so no recovered function ever
// spelled the destruction of a local string. That destruction is the top
// unknown block of the remaining corpus (236 functions): the COW dispose
// inlined as `rep = _M_p - 24; if (rep != &_S_empty_rep_storage) ...`.
//
// Every statement sits on its own line on purpose: the line IS what the
// phrase table hands back to whoever hits this shape.
#include <string>

namespace donors {

// Declaration-only bodies exist so the inlined construction AND the
// end-of-scope destruction both land on the declaration line. With any
// further statement in the function, the dispose would be attributed to
// whichever line happened to come last, which is not the line to write.
void string_local_only_from_cstr(const char* in)
{
    std::string s(in);
}

void string_local_only_copy(const std::string& in)
{
    std::string s(in);
}

void string_local_only_two(const std::string& a, const std::string& b)
{
    std::string first(a);
    std::string second(b);
}

void string_local_from_cstr(const char* in, unsigned int* out)
{
    std::string s(in);
    *out = (unsigned int)s.size();
}

void string_local_copy(const std::string& in, unsigned int* out)
{
    std::string s(in);
    *out = (unsigned int)s.size();
}

void string_local_assign_member(void* self, const char* in)
{
    std::string* field = reinterpret_cast<std::string*>((char*)self + 0x28);
    std::string tmp(in);
    field->assign(tmp);
}

void string_local_two(const char* a, const char* b, unsigned int* out)
{
    std::string first(a);
    std::string second(b);
    *out = (unsigned int)(first.size() + second.size());
}

void string_local_in_big_frame(const char* in, unsigned int* out)
{
    char buf[0x380];
    std::string s(in);
    buf[0] = s.c_str()[0];
    *out = (unsigned int)(s.size() + buf[0]);
}

unsigned int string_local_size(const char* in)
{
    std::string s(in);
    return (unsigned int)s.size();
}

bool string_local_compare(const char* a, const char* b)
{
    std::string s(a);
    return s == b;
}

void string_local_append(const char* a, const char* b, unsigned int* out)
{
    std::string s(a);
    s += b;
    *out = (unsigned int)s.size();
}

void string_local_clear_and_assign(std::string* field, const char* in)
{
    std::string tmp(in);
    field->assign(tmp);
    field->erase();
}

}  // namespace donors
