#include <sstream>
#include <string>

static std::string s0_87e390;
static std::string s1_87e390;

struct Obj_87e390 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87e390 {
    std::istringstream ss;
    IssHolder_87e390(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87e390() __attribute__((noinline));
};
IssHolder_87e390::~IssHolder_87e390() {}

void setArgFromString_87e390(Obj_87e390* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_87e390 h(s);
        h.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87e390 h(s);
        h.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass330_setArgFromString_int_std_string_constref (0x87e390)