// FUNCTION: BF2 0xa9a9d0
#include <string>

namespace dice { namespace hfe {
extern void* game;
extern unsigned int IID_IGameClient;
extern void* serverSettings;
} }

struct Self {
    char pad0[0x30];
    int mode;
    char pad1[4];
    void* arg0;
    char pad2[0xd0];
    char hasResult;
    char pad3[7];
    std::string value;
};

extern "C" void* dice_hfe_anonymous_namespace_ConsoleClass707_executeObjectMethod(Self* self) {
    if (*(int*)((char*)self + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)self + 0x108) = 1;
        void* ss;
        void* mgr = dice::hfe::game;
        if (mgr == 0) goto use_d;
        {
            void* c = ((void* (*)(void*, unsigned int))(*(void***)mgr)[0x18 / 8])(mgr, dice::hfe::IID_IGameClient);
            ss = 0;
            if (c == 0) goto use_d;
        }
        goto use;
    use_d:
        ss = dice::hfe::serverSettings;
    use:
        ((std::string*)((char*)self + 0x110))->assign(*(std::string*)((char*)ss + 0xd0));
        return (char*)self + 0x110;
    }
not_zero:
    if (*(int*)((char*)self + 0x30) != 1) return 0;
    {
        std::string val(*(std::string const*)*(void**)((char*)self + 0x38));
        *(char*)((char*)self + 0x108) = 0;
        void* ss;
        void* mgr = dice::hfe::game;
        if (mgr == 0) goto use2_d;
        {
            void* c = ((void* (*)(void*, unsigned int))(*(void***)mgr)[0x18 / 8])(mgr, dice::hfe::IID_IGameClient);
            ss = 0;
            if (c == 0) goto use2_d;
        }
        goto use2;
    use2_d:
        ss = dice::hfe::serverSettings;
    use2:
        ((std::string*)((char*)ss + 0xd0))->assign(val);
        return 0;
    }
}
