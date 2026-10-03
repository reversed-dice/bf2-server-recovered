// FUNCTION: BF2 0x87e250
#include <sstream>
#include <string>

static std::string s0_87e250;
static std::string s1_87e250;

struct Obj_87e250 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87e250 {
    std::istringstream ss;
    IssHolder_87e250(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87e250() __attribute__((noinline));
};
IssHolder_87e250::~IssHolder_87e250() {}

void setArgFromString_87e250(Obj_87e250* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_87e250 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_87e250 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass331_setArgFromString_int_std_string_constref (0x87e250)