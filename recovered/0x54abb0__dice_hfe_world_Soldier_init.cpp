// FUNCTION: BF2 0x54abb0
namespace dice { namespace hfe {
extern void fn_58ac40(void* a);
extern void fn_574860(void* a);
extern void fn_541fc0(void* a, int b, void* c);
extern void fn_541d80(void* a, void* b, bool c);
extern void fn_551270(void* a);
extern void* g_010b8c08;
}}

namespace dice { namespace hfe { namespace world {
void Soldier_init(void* self) {
    dice::hfe::fn_58ac40(self);
    void* ai = *(void**)((char*)self + 0x68);
    if (ai != 0) {
        ((void (*)(void*))(*(void***)ai)[0x80 / 8])(ai);
    }
    dice::hfe::fn_574860(self);
    int n = ((int (*)(void*))(*(void***)self)[0x338 / 8])(self);
    dice::hfe::fn_541fc0(self, n, (char*)self + 0x320);
    dice::hfe::fn_541d80(self, (char*)self + 0x360, true);
    if (*(void**)((char*)self + 0x50) != 0) {
        dice::hfe::fn_551270(self);
    }
    void* g = dice::hfe::g_010b8c08;
    ((void (*)(void*, void*))(*(void***)g)[0x328 / 8])(g, self);
    *(int*)((char*)self + 0x4b8) = 0;
    if (ai != 0) {
        ((void (*)(void*))(*(void***)ai)[0x88 / 8])(ai);
        ((void (*)(void*))(*(void***)ai)[0x90 / 8])(ai);
    }
}
} } }
