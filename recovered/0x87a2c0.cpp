#include <sstream>
#include <string>

static unsigned int sarg0_87a2c0;
static unsigned int sarg1_87a2c0;
static unsigned int sarg2_87a2c0;

struct IssHolder_87a2c0 {
    std::istringstream ss;
    IssHolder_87a2c0(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_87a2c0() __attribute__((noinline));
};
IssHolder_87a2c0::~IssHolder_87a2c0() {}

extern "C" void sas_87a2c0(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_87a2c0 h(s);
        h.ss >> sarg0_87a2c0;
        *(void**)((char*)self + 0x38) = &sarg0_87a2c0;
        return;
    }
    if (index == 2) {
        IssHolder_87a2c0 h(s);
        h.ss >> sarg1_87a2c0;
        *(void**)((char*)self + 0x40) = &sarg1_87a2c0;
        return;
    }
    if (index == 3) {
        IssHolder_87a2c0 h(s);
        h.ss >> sarg2_87a2c0;
        *(void**)((char*)self + 0x48) = &sarg2_87a2c0;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass206_setArgFromString_int_std_string_constref (0x87a2c0)