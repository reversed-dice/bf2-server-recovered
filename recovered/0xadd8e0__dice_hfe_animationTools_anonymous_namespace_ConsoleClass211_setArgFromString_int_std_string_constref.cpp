// FUNCTION: BF2 0xadd8e0
#include <sstream>
#include <string>

static std::string s0_add8e0;
static float s1_add8e0;

struct Obj_add8e0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_add8e0 {
    std::istringstream ss;
    IssHolder_add8e0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_add8e0() __attribute__((noinline));
};
IssHolder_add8e0::~IssHolder_add8e0() {}

void setArgFromString_add8e0(Obj_add8e0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_add8e0 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_add8e0 h1(s);
        h1.ss >> s1_add8e0;
        self->p1 = &s1_add8e0;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass211_setArgFromString_int_std_string_constref (0xadd8e0)