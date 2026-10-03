#include <sstream>
#include <string>

static int sarg0_af7170;
static float sarg1_af7170;
static float sarg2_af7170;

struct IssHolder_af7170 {
    std::istringstream ss;
    IssHolder_af7170(const std::string& s) : ss(s, std::ios_base::in) {}
    ~IssHolder_af7170() __attribute__((noinline));
};
IssHolder_af7170::~IssHolder_af7170() {}

extern "C" void sas_af7170(void* self, int index, const std::string& s)
{
    if (index == 1) {
        IssHolder_af7170 h(s);
        h.ss >> sarg0_af7170;
        *(void**)((char*)self + 0x38) = &sarg0_af7170;
        return;
    }
    if (index == 2) {
        IssHolder_af7170 h(s);
        h.ss >> sarg1_af7170;
        *(void**)((char*)self + 0x40) = &sarg1_af7170;
        return;
    }
    if (index == 3) {
        IssHolder_af7170 h(s);
        h.ss >> sarg2_af7170;
        *(void**)((char*)self + 0x48) = &sarg2_af7170;
        return;
    }
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass154_setArgFromString_int_std_string_constref (0xaf7170)