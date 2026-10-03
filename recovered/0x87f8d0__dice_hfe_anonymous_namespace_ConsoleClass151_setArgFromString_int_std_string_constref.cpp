// FUNCTION: BF2 0x87f8d0
#include <sstream>
#include <string>

static int s0_87f8d0;
static std::string s1_87f8d0;

struct Obj_87f8d0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87f8d0 {
    std::istringstream ss;
    IssHolder_87f8d0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87f8d0() __attribute__((noinline));
};
IssHolder_87f8d0::~IssHolder_87f8d0() {}

void setArgFromString_87f8d0(Obj_87f8d0* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_87f8d0 h0(s);
        h0.ss >> s0_87f8d0;
        self->p0 = &s0_87f8d0;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87f8d0 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass151_setArgFromString_int_std_string_constref (0x87f8d0)