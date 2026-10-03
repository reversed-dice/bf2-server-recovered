// FUNCTION: BF2 0x85fb60
#include <sstream>
#include <string>

static int s0_85fb60;
static std::string s1_85fb60;

struct Obj_85fb60 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85fb60 {
    std::istringstream ss;
    IssHolder_85fb60(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85fb60() __attribute__((noinline));
};
IssHolder_85fb60::~IssHolder_85fb60() {}

void setArgFromString_85fb60(Obj_85fb60* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_85fb60 h0(s);
        h0.ss >> s0_85fb60;
        self->p0 = &s0_85fb60;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85fb60 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass441_setArgFromString_int_std_string_constref (0x85fb60)