// FUNCTION: BF2 0x87ca90
namespace dice { namespace hfe {
extern void* gameLogic;
} }

typedef int (*QueryFn)(void*, int, int, int, int, int);

struct Self {
    char pad0[0x30];
    int m_argc;
    char pad1[4];
    int* m_a0;
    int* m_a1;
    int* m_a2;
    int* m_a3;
    int* m_a4;
    char pad2[0xa8];
    char m_active;
    char pad3[1];
    char m_result;
};

extern "C" void* dice_hfe_anonymous_namespace_ConsoleClass193_executeObjectMethod(Self* self) {
    if (self->m_argc == 1) {
        int a0 = *self->m_a0;
        self->m_active = 1;
        int r = ((QueryFn)(*(void***)dice::hfe::gameLogic)[0x248 / 8])(dice::hfe::gameLogic, a0, 0, 0, 0, 0);
        self->m_result = (char)r;
        return &self->m_result;
    }
    else if (self->m_argc == 2) {
        int a0 = *self->m_a0;
        int a1 = *self->m_a1;
        self->m_active = 1;
        int r = ((QueryFn)(*(void***)dice::hfe::gameLogic)[0x248 / 8])(dice::hfe::gameLogic, a0, a1, 0, 0, 0);
        self->m_result = (char)r;
        return &self->m_result;
    }
    else if (self->m_argc == 3) {
        int a0 = *self->m_a0;
        int a1 = *self->m_a1;
        int a2 = *self->m_a2;
        self->m_active = 1;
        int r = ((QueryFn)(*(void***)dice::hfe::gameLogic)[0x248 / 8])(dice::hfe::gameLogic, a0, a1, a2, 0, 0);
        self->m_result = (char)r;
        return &self->m_result;
    }
    else if (self->m_argc == 4) {
        int a0 = *self->m_a0;
        int a1 = *self->m_a1;
        int a2 = *self->m_a2;
        int a3 = *self->m_a3;
        self->m_active = 1;
        int r = ((QueryFn)(*(void***)dice::hfe::gameLogic)[0x248 / 8])(dice::hfe::gameLogic, a0, a1, a2, a3, 0);
        self->m_result = (char)r;
        return &self->m_result;
    }
    else if (self->m_argc == 5) {
        int a0 = *self->m_a0;
        int a1 = *self->m_a1;
        int a2 = *self->m_a2;
        int a3 = *self->m_a3;
        int a4 = *self->m_a4;
        self->m_active = 1;
        int r = ((QueryFn)(*(void***)dice::hfe::gameLogic)[0x248 / 8])(dice::hfe::gameLogic, a0, a1, a2, a3, a4);
        self->m_result = (char)r;
        return &self->m_result;
    }
    return 0;
}
