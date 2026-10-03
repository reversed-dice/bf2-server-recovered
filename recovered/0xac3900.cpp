#include <sstream>
#include <string>

static std::string s0_ac3900;
static std::string s1_ac3900;

struct Obj_ac3900 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_ac3900 {
    std::istringstream ss;
    IssHolder_ac3900(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_ac3900() __attribute__((noinline));
};
IssHolder_ac3900::~IssHolder_ac3900() {}

void setArgFromString_ac3900(Obj_ac3900* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_ac3900 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_ac3900 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_tool_anonymous_namespace_ConsoleClass201_setArgFromString_int_std_string_constref (0xac3900)