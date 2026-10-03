#include <sstream>
#include <string>

static std::string s0_85f530;
static std::string s1_85f530;

struct Obj_85f530 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85f530 {
    std::istringstream ss;
    IssHolder_85f530(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85f530() __attribute__((noinline));
};
IssHolder_85f530::~IssHolder_85f530() {}

void setArgFromString_85f530(Obj_85f530* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85f530 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85f530 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass447_setArgFromString_int_std_string_constref (0x85f530)