// FUNCTION: BF2 0x7553c0
#include <sstream>
#include <string>

static std::string s0_7553c0;
static float s1_7553c0;

struct Obj_7553c0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_7553c0 {
    std::istringstream ss;
    IssHolder_7553c0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_7553c0() __attribute__((noinline));
};
IssHolder_7553c0::~IssHolder_7553c0() {}

void setArgFromString_7553c0(Obj_7553c0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_7553c0 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_7553c0 h1(s);
        h1.ss >> s1_7553c0;
        self->p1 = &s1_7553c0;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass175_setArgFromString_int_std_string_constref (0x7553c0)