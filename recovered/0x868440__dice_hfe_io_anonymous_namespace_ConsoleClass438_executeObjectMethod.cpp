// FUNCTION: BF2 0x868440
// Target: dice::hfe::io::(anonymous namespace)::ConsoleClass438::executeObjectMethod()
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

struct Console_io_vt {
    virtual void p000(void);
    virtual void p001(void);
    virtual void p002(void);
    virtual void p003(void);
    virtual void p004(void);
    virtual void p005(void);
    virtual void p006(void);
    virtual void p007(void);
    virtual void p008(void);
    virtual void p009(void);
    virtual void p010(void);
    virtual void p011(void);
    virtual void p012(void);
    virtual void p013(void);
    virtual void p014(void);
    virtual void p015(void);
    virtual void p016(void);
    virtual void p017(void);
    virtual std::string method(const std::string& a0) const;
};

struct Console_io {
    char _pad0[0x30];
    int  m_argc;
    char _pad1[0x4];
    std::string* m_argv0;
    char _pad2[0xc8];
    char m_hasResult;
    char _pad3[0x7];
    std::string m_result;
};

std::string* run_438c(Console_io* self) {
    int argc = self->m_argc;
    if (argc == 0) {
        self->m_hasResult = 1;
        self->m_result.assign(((Console_io_vt*)*(void**)0x010ae100)->method(std::string("v_")));
        return &self->m_result;
    }
    if (--argc != 0) {
        return 0;
    }
    std::string tmp(*self->m_argv0);
    self->m_hasResult = 1;
    self->m_result.assign(((Console_io_vt*)*(void**)0x010ae100)->method(tmp));
    return &self->m_result;
}
