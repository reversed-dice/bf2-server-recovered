#include <sstream>
#include <string>

static std::string s0_87e5f0;
static std::string s1_87e5f0;

struct Obj_87e5f0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87e5f0 {
    std::istringstream ss;
    IssHolder_87e5f0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87e5f0() __attribute__((noinline));
};
IssHolder_87e5f0::~IssHolder_87e5f0() {}

void setArgFromString_87e5f0(Obj_87e5f0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_87e5f0 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87e5f0 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass328_setArgFromString_int_std_string_constref (0x87e5f0)