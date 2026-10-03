#include <sstream>
#include <string>

static std::string s0_a87c60;
static bool s1_a87c60;

struct Obj_a87c60 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_a87c60 {
    std::istringstream ss;
    IssHolder_a87c60(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_a87c60() __attribute__((noinline));
};
IssHolder_a87c60::~IssHolder_a87c60() {}

void setArgFromString_a87c60(Obj_a87c60* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_a87c60 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_a87c60 h(s);
        h.ss >> s1_a87c60;
        self->p1 = &s1_a87c60;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass594_setArgFromString_int_std_string_constref (0xa87c60)