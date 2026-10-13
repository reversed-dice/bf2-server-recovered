// FUNCTION: BF2 0x8aec00
#include <string>

namespace dice { namespace hfe {
class BF2Engine {
public:
    void hostServer(std::string const&, std::string const&);
};
extern BF2Engine* bf2Engine;

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
    if (self->m_argc == 1) {
        std::string a(*self->arg0);
        self->hasResult = 0;
        bf2Engine->hostServer(a, std::string("conquest"));
    } else if (self->m_argc == 2) {
        std::string a(*self->arg0);
        std::string b(*self->arg1);
        self->hasResult = 0;
        bf2Engine->hostServer(a, b);
    }
    return 0;
}

} } }
