// FUNCTION: BF2 0x85db10
#include <sstream>
#include <string>

static std::string s0_85db10;
static std::string s1_85db10;

struct Obj_85db10 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85db10 {
    std::istringstream ss;
    IssHolder_85db10(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85db10() __attribute__((noinline));
};
IssHolder_85db10::~IssHolder_85db10() {}

void setArgFromString_85db10(Obj_85db10* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85db10 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85db10 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass563_setArgFromString_int_std_string_constref (0x85db10)