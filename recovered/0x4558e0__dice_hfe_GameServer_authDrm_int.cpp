// FUNCTION: BF2 0x4558e0
namespace dice { namespace hfe {
extern void fn_4536f0(void* a, int b);
extern void* fn_407ef8(void* a);
void authXPack_0x455920(void* self, int a) {
    if (a != -1) {
        fn_4536f0(self, a);
        return;
    }
    void* it = *(void**)((char*)self + 0x100);
    void* end = (char*)self + 0xf0;
    while (it != end) {
        it = fn_407ef8(it);
    }
}
} }

// REVERSED_FUNCTION: dice_hfe_GameServer_authDrm_int (0x4558e0)
