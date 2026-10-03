#include <sstream>
#include <string>

static std::string s0_87f040;
static std::string s1_87f040;

struct Obj_87f040 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87f040 {
    std::istringstream ss;
    IssHolder_87f040(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87f040() __attribute__((noinline));
};
IssHolder_87f040::~IssHolder_87f040() {}

void setArgFromString_87f040(Obj_87f040* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_87f040 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87f040 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass174_setArgFromString_int_std_string_constref (0x87f040)