// FUNCTION: BF2 0x87f5b0
#include <sstream>
#include <string>

static std::string s0_87f5b0;
static bool s1_87f5b0;

struct Obj_87f5b0 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_87f5b0 {
    std::istringstream ss;
    IssHolder_87f5b0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87f5b0() __attribute__((noinline));
};
IssHolder_87f5b0::~IssHolder_87f5b0() {}

void setArgFromString_87f5b0(Obj_87f5b0* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_87f5b0 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_87f5b0 h1(s);
        h1.ss >> s1_87f5b0;
        self->p1 = &s1_87f5b0;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass166_setArgFromString_int_std_string_constref (0x87f5b0)