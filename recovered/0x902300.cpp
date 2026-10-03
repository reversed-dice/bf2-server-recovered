#include <sstream>
#include <string>

static bool s0_902300;
static std::string s1_902300;

struct Obj_902300 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_902300 {
    std::istringstream ss;
    IssHolder_902300(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_902300() __attribute__((noinline));
};
IssHolder_902300::~IssHolder_902300() {}

void setArgFromString_902300(Obj_902300* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_902300 h(s);
        h.ss >> s0_902300;
        self->p0 = &s0_902300;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_902300 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass525_setArgFromString_int_std_string_constref (0x902300)