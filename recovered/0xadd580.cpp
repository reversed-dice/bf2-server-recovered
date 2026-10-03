#include <sstream>
#include <string>

static std::string s0_add580;
static float s1_add580;

struct Obj_add580 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_add580 {
    std::istringstream ss;
    IssHolder_add580(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_add580() __attribute__((noinline));
};
IssHolder_add580::~IssHolder_add580() {}

void setArgFromString_add580(Obj_add580* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_add580 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_add580 h(s);
        h.ss >> s1_add580;
        self->p1 = &s1_add580;
    }
}
// REVERSED_FUNCTION: dice_hfe_animationTools_anonymous_namespace_ConsoleClass216_setArgFromString_int_std_string_constref (0xadd580)