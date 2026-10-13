// FUNCTION: BF2 0x948f10
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace world {
extern void* getActiveTemplate(unsigned int);
extern unsigned int CID_ObjectSpawnerTemplate;
} } }

struct Self {
    char pad0[0x30];
    int mode;
    char pad1[4];
    void* arg0;
    void* arg1;
    char pad2[0xc0];
    char hasResult;
    char pad3[7];
};

extern "C" void* dice_hfe_world_anonymous_namespace_ConsoleClass918_executeObjectMethod(Self* self) {
    if (*(int*)((char*)self + 0x30) == 2) {
        int a = **(int**)((char*)self + 0x38);
        std::string s(*(std::string const*)*(void**)((char*)self + 0x40));
        unsigned int cid = dice::hfe::world::CID_ObjectSpawnerTemplate;
        *(char*)((char*)self + 0x108) = 0;
        void* t = dice::hfe::world::getActiveTemplate(cid);
        typedef void (*Fn)(void*, int, std::string);
        Fn f = (Fn)(*(void***)t)[0x228 / 8];
        f(t, a, s);
    }
    return 0;
}
