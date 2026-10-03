#include <sstream>
#include <string>

static int s0_901d70;
static std::string s1_901d70;

struct Obj_901d70 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_901d70 {
    std::istringstream ss;
    IssHolder_901d70(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_901d70() __attribute__((noinline));
};
IssHolder_901d70::~IssHolder_901d70() {}

void setArgFromString_901d70(Obj_901d70* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_901d70 h(s);
        h.ss >> s0_901d70;
        self->p0 = &s0_901d70;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_901d70 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass918_setArgFromString_int_std_string_constref (0x901d70)