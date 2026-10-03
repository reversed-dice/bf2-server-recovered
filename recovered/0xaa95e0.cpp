#include <sstream>
#include <string>

static std::string s0_aa95e0;
static std::string s1_aa95e0;

struct Obj_aa95e0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_aa95e0 {
    std::istringstream ss;
    IssHolder_aa95e0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_aa95e0() __attribute__((noinline));
};
IssHolder_aa95e0::~IssHolder_aa95e0() {}

void setArgFromString_aa95e0(Obj_aa95e0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_aa95e0 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_aa95e0 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass435_setArgFromString_int_std_string_constref (0xaa95e0)