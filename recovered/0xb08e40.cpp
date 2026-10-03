#include <sstream>
#include <string>

static std::string s0_b08e40;
static std::string s1_b08e40;

struct Obj_b08e40 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_b08e40 {
    std::istringstream ss;
    IssHolder_b08e40(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_b08e40() __attribute__((noinline));
};
IssHolder_b08e40::~IssHolder_b08e40() {}

void setArgFromString_b08e40(Obj_b08e40* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_b08e40 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_b08e40 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_ai_anonymous_namespace_ConsoleClass139_setArgFromString_int_std_string_constref (0xb08e40)