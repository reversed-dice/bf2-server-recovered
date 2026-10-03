#include <sstream>
#include <string>

static std::string s0_85f1a0;
static std::string s1_85f1a0;

struct Obj_85f1a0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85f1a0 {
    std::istringstream ss;
    IssHolder_85f1a0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85f1a0() __attribute__((noinline));
};
IssHolder_85f1a0::~IssHolder_85f1a0() {}

void setArgFromString_85f1a0(Obj_85f1a0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85f1a0 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85f1a0 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass450_setArgFromString_int_std_string_constref (0x85f1a0)