// FUNCTION: BF2 0xaa9710
#include <sstream>
#include <string>

static std::string s0_aa9710;
static std::string s1_aa9710;

struct Obj_aa9710 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_aa9710 {
    std::istringstream ss;
    IssHolder_aa9710(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_aa9710() __attribute__((noinline));
};
IssHolder_aa9710::~IssHolder_aa9710() {}

void setArgFromString_aa9710(Obj_aa9710* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_aa9710 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_aa9710 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass353_setArgFromString_int_std_string_constref (0xaa9710)