// FUNCTION: BF2 0xade200
#include <sstream>
#include <string>

static std::string s0_ade200;
static std::string s1_ade200;

struct Obj_ade200 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_ade200 {
    std::istringstream ss;
    IssHolder_ade200(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ade200() __attribute__((noinline));
};
IssHolder_ade200::~IssHolder_ade200() {}

void setArgFromString_ade200(Obj_ade200* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_ade200 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_ade200 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass143_setArgFromString_int_std_string_constref (0xade200)