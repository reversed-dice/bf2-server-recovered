// FUNCTION: BF2 0x85ec20
#include <sstream>
#include <string>

static std::string s0_85ec20;
static std::string s1_85ec20;

struct Obj_85ec20 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85ec20 {
    std::istringstream ss;
    IssHolder_85ec20(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85ec20() __attribute__((noinline));
};
IssHolder_85ec20::~IssHolder_85ec20() {}

void setArgFromString_85ec20(Obj_85ec20* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85ec20 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85ec20 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass503_setArgFromString_int_std_string_constref (0x85ec20)