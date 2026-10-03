#include <sstream>
#include <string>

static std::string s0_85e860;
static unsigned int s1_85e860;

struct Obj_85e860 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85e860 {
    std::istringstream ss;
    IssHolder_85e860(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85e860() __attribute__((noinline));
};
IssHolder_85e860::~IssHolder_85e860() {}

void setArgFromString_85e860(Obj_85e860* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85e860 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_85e860 h(s);
        h.ss >> s1_85e860;
        self->p1 = &s1_85e860;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass507_setArgFromString_int_std_string_constref (0x85e860)