// FUNCTION: BF2 0x85ea40
#include <sstream>
#include <string>

static std::string s0_85ea40;
static int s1_85ea40;

struct Obj_85ea40 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85ea40 {
    std::istringstream ss;
    IssHolder_85ea40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85ea40() __attribute__((noinline));
};
IssHolder_85ea40::~IssHolder_85ea40() {}

void setArgFromString_85ea40(Obj_85ea40* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85ea40 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_85ea40 h1(s);
        h1.ss >> s1_85ea40;
        self->p1 = &s1_85ea40;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass505_setArgFromString_int_std_string_constref (0x85ea40)