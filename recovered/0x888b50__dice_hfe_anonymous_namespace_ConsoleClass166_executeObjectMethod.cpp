// FUNCTION: BF2 0x888b50
#include <string>

namespace dice { namespace hfe {
extern void* gameLogic;
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

extern "C" void* dice_hfe_anonymous_namespace_ConsoleClass166_executeObjectMethod(Self* self) {
    if (*(int*)((char*)self + 0x30) == 2) {
        std::string a(*(std::string const*)*(void**)((char*)self + 0x38));
        unsigned char b = **(unsigned char**)((char*)self + 0x40);
        *(char*)((char*)self + 0x108) = 0;
        void* gl = dice::hfe::gameLogic;
        void (*fn)(void*, std::string, unsigned char) = (void (*)(void*, std::string, unsigned char))(*(void***)gl)[0x558 / 8];
        fn(gl, a, b);
    }
    return 0;
}
