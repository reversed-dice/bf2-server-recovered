#include <sstream>
#include <string>

static std::string s0_ac31f0;
static std::string s1_ac31f0;

struct Obj_ac31f0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_ac31f0 {
    std::istringstream ss;
    IssHolder_ac31f0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ac31f0() __attribute__((noinline));
};
IssHolder_ac31f0::~IssHolder_ac31f0() {}

void setArgFromString_ac31f0(Obj_ac31f0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_ac31f0 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_ac31f0 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass224_setArgFromString_int_std_string_constref (0xac31f0)