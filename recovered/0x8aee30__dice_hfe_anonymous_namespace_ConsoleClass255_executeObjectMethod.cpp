// FUNCTION: BF2 0x8aee30
#include <string>

namespace dice { namespace hfe {
class Vars {
public:
    static void set(std::string, std::string);
};

namespace {

struct Self {
    char pad0[0x30];
    int m_argc;
    char pad1[4];
    std::string* arg0;
    std::string* arg1;
    char pad2[0xc0];
    char hasResult;
};

long eom(Self* self) {
    if (self->m_argc == 2) {
        std::string a(*self->arg0);
        std::string b(*self->arg1);
        self->hasResult = 0;
        Vars::set(a, b);
    }
    return 0;
}

} } }
