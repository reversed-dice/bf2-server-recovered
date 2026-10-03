#include <sstream>
#include <string>

static std::string s0_755590;
static float s1_755590;

struct Obj_755590 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_755590 {
    std::istringstream ss;
    IssHolder_755590(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_755590() __attribute__((noinline));
};
IssHolder_755590::~IssHolder_755590() {}

void setArgFromString_755590(Obj_755590* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_755590 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_755590 h(s);
        h.ss >> s1_755590;
        self->p1 = &s1_755590;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass171_setArgFromString_int_std_string_constref (0x755590)