#include <sstream>
#include <string>

static std::string s0_85ee10;
static std::string s1_85ee10;

struct Obj_85ee10 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85ee10 {
    std::istringstream ss;
    IssHolder_85ee10(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85ee10() __attribute__((noinline));
};
IssHolder_85ee10::~IssHolder_85ee10() {}

void setArgFromString_85ee10(Obj_85ee10* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85ee10 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85ee10 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass453_setArgFromString_int_std_string_constref (0x85ee10)