#include <sstream>
#include <string>

static int s0_87f7d0;
static std::string s1_87f7d0;

struct Obj_87f7d0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87f7d0 {
    std::istringstream ss;
    IssHolder_87f7d0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87f7d0() __attribute__((noinline));
};
IssHolder_87f7d0::~IssHolder_87f7d0() {}

void setArgFromString_87f7d0(Obj_87f7d0* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_87f7d0 h(s);
        h.ss >> s0_87f7d0;
        self->p0 = &s0_87f7d0;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87f7d0 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass153_setArgFromString_int_std_string_constref (0x87f7d0)