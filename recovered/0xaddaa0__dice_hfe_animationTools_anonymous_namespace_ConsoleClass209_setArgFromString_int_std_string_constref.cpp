// FUNCTION: BF2 0xaddaa0
#include <sstream>
#include <string>

static std::string s0_addaa0;
static float s1_addaa0;

struct Obj_addaa0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_addaa0 {
    std::istringstream ss;
    IssHolder_addaa0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_addaa0() __attribute__((noinline));
};
IssHolder_addaa0::~IssHolder_addaa0() {}

void setArgFromString_addaa0(Obj_addaa0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_addaa0 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_addaa0 h1(s);
        h1.ss >> s1_addaa0;
        self->p1 = &s1_addaa0;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass209_setArgFromString_int_std_string_constref (0xaddaa0)