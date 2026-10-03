// FUNCTION: BF2 0x85eb30
#include <sstream>
#include <string>

static std::string s0_85eb30;
static bool s1_85eb30;

struct Obj_85eb30 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85eb30 {
    std::istringstream ss;
    IssHolder_85eb30(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85eb30() __attribute__((noinline));
};
IssHolder_85eb30::~IssHolder_85eb30() {}

void setArgFromString_85eb30(Obj_85eb30* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85eb30 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_85eb30 h1(s);
        h1.ss >> s1_85eb30;
        self->p1 = &s1_85eb30;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass504_setArgFromString_int_std_string_constref (0x85eb30)