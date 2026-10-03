// FUNCTION: BF2 0x901910
#include <sstream>
#include <string>

static std::string s0_901910;
static int s1_901910;

struct Obj_901910 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_901910 {
    std::istringstream ss;
    IssHolder_901910(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_901910() __attribute__((noinline));
};
IssHolder_901910::~IssHolder_901910() {}

void setArgFromString_901910(Obj_901910* self, int index, const std::string& s)
{
    if (index == 1) {
        static std::string arg;
        IssHolder_901910 h0(s);
        h0.ss >> arg;
        self->p0 = &arg;
    }
    else if (index == 2) {
        IssHolder_901910 h1(s);
        h1.ss >> s1_901910;
        self->p1 = &s1_901910;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass956_setArgFromString_int_std_string_constref (0x901910)