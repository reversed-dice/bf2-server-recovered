// FUNCTION: BF2 0xa99b60
#include <string>

extern "C" {
    extern void* dice_hfe_game;
    extern void* dice_hfe_serverSettings;
    extern const unsigned int IID_IGameClient;
}

namespace dice { namespace hfe {

struct EOM725 {
    unsigned char _pad[0x30];
    int m_count;
    unsigned char _pad2[0x38 - 0x34];
    void* m_arg_ptr;
    unsigned char _pad3[0x108 - 0x40];
    char m_flag;
    unsigned char _pad4[0x10c - 0x109];
    int m_result;
};

struct Game { void* _vtable; };
typedef void* (*QFn)(Game*, unsigned int);

static inline void* getClient() {
    Game* g = *(Game**)0x010c5420;
    void* obj = 0;
    if (!g || !((QFn)(*(void***)g)[3])(g, IID_IGameClient)) obj = *(void**)0x0108b660;
    return obj;
}

extern "C" void* executeObjectMethod_a99b60(EOM725* self) {
    int count = self->m_count;
    if (count != 0) {
        if (count != 1) return (void*)0;
        int arg = *(int*)self->m_arg_ptr;
        self->m_flag = 0;
        void* obj = getClient();
        if (arg < 1) arg = 1;
        else if (arg > 10) arg = 10;
        *(int*)((char*)obj + 0xf8) = arg;
        return (void*)0;
    }
    self->m_flag = 1;
    void* obj = getClient();
    self->m_result = *(int*)((char*)obj + 0xf8);
    return &self->m_result;
}

} }
