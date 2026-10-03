// FUNCTION: BF2 0x87ef10
#include <sstream>
#include <string>

static std::string s0_87ef10;
static std::string s1_87ef10;

struct Obj_87ef10 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87ef10 {
    std::istringstream ss;
    IssHolder_87ef10(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87ef10() __attribute__((noinline));
};
IssHolder_87ef10::~IssHolder_87ef10() {}

void setArgFromString_87ef10(Obj_87ef10* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_87ef10 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87ef10 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass175_setArgFromString_int_std_string_constref (0x87ef10)