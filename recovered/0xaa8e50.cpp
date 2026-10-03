#include <sstream>
#include <string>

extern "C" {
extern void istreamref_IObject_ptrproxy_69e070(std::istringstream*, void*);
}

struct IObjPtr_aa8e50 { void* p; IObjPtr_aa8e50() : p(0) {} };

struct IssHolder_aa8e50 {
    std::istringstream ss;
    IssHolder_aa8e50(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_aa8e50() __attribute__((noinline));
};
IssHolder_aa8e50::~IssHolder_aa8e50() {}

void setArgFromString_aa8e50(void* self, int index, const std::string& s)
{
    if (index == 1) {
        static IObjPtr_aa8e50 arg;
        IssHolder_aa8e50 h(s);
        istreamref_IObject_ptrproxy_69e070(&h.ss, &arg);
        *(void**)((char*)self + 0x38) = &arg;
    }
    else if (index == 2) {
        static int arg2;
        IssHolder_aa8e50 h(s);
        h.ss >> arg2;
        *(void**)((char*)self + 0x40) = &arg2;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass444_setArgFromString_int_std_string_constref (0xaa8e50)
