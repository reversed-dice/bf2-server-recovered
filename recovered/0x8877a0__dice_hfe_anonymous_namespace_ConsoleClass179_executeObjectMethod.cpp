// FUNCTION: BF2 0x8877a0
#include <string>

namespace dice { namespace hfe {
extern void* gameLogic;
} }

struct Self {
    char pad0[0x30];
    int mode;
    char pad1[4];
    void* arg0;
    void* arg1;
    char pad2[0xc8];
    char hasResult;
    char pad3[7];
    std::string value;
};

extern "C" void* dice_hfe_anonymous_namespace_ConsoleClass179_executeObjectMethod(Self* self) {
    if (*(int*)((char*)self + 0x30) == 4) {
        int a = **(int**)((char*)self + 0x38);
        int b = **(int**)((char*)self + 0x40);
        std::string s1(*(std::string const*)*(void**)((char*)self + 0x48));
        std::string s2(*(std::string const*)*(void**)((char*)self + 0x50));
        *(char*)((char*)self + 0x108) = 0;
        ((void (*)(void*, int, int, std::string const&, std::string const&))(*(void***)dice::hfe::gameLogic)[0x280 / 8])(dice::hfe::gameLogic, a, b, s1, s2);
    }
    return 0;
}
