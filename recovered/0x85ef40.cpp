#include <sstream>
#include <string>

static std::string s0_85ef40;
static std::string s1_85ef40;

struct Obj_85ef40 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85ef40 {
    std::istringstream ss;
    IssHolder_85ef40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85ef40() __attribute__((noinline));
};
IssHolder_85ef40::~IssHolder_85ef40() {}

void setArgFromString_85ef40(Obj_85ef40* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85ef40 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85ef40 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass452_setArgFromString_int_std_string_constref (0x85ef40)