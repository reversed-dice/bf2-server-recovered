// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0xb07620
namespace dice { namespace hfe { namespace ai {

struct AITemplate {
    char _pad[0xc];
    unsigned int flags; // 0xc
};

AITemplate* getActiveAITemplate();

namespace {

class ConsoleClass101 {
public:
    virtual void v0();
    virtual int executeObjectMethod();

    char _pad[0x28]; // vptr is 8, up to 0x30 is 0x28
    int m_argc; // 0x30
    int* m_argv; // 0x38 (int**)
    char _pad2[0x108 - 0x40];
    bool m_flag; // 0x108
};

int ConsoleClass101::executeObjectMethod() {
    if (m_argc == 1) {
        int val = *m_argv;
        m_flag = false;
        AITemplate* tmpl = getActiveAITemplate();
        if (val >= 0) {
            tmpl->flags |= (1UL << val);
            return 0;
        }
    }
    return 0;
}

} } } }
