#include <sstream>
#include <string>

static std::string s0_85dc40;
static std::string s1_85dc40;

struct Obj_85dc40 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_85dc40 {
    std::istringstream ss;
    IssHolder_85dc40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_85dc40() __attribute__((noinline));
};
IssHolder_85dc40::~IssHolder_85dc40() {}

void setArgFromString_85dc40(Obj_85dc40* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_85dc40 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_85dc40 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_io_anonymous_namespace_ConsoleClass562_setArgFromString_int_std_string_constref (0x85dc40)