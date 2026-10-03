// FUNCTION: BF2 0x901a10
#include <sstream>
#include <string>

static int s0_901a10;
static std::string s1_901a10;

struct Obj_901a10 {
    char _pad[0x38];
    void* p0;  // +0x38
    void* p1;  // +0x40
};

struct IssHolder_901a10 {
    std::istringstream ss;
    IssHolder_901a10(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_901a10() __attribute__((noinline));
};
IssHolder_901a10::~IssHolder_901a10() {}

void setArgFromString_901a10(Obj_901a10* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_901a10 h0(s);
        h0.ss >> s0_901a10;
        self->p0 = &s0_901a10;
    }
    else if (index == 2) {
        static std::string arg;
        IssHolder_901a10 h1(s);
        h1.ss >> arg;
        self->p1 = &arg;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass947_setArgFromString_int_std_string_constref (0x901a10)