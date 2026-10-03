// FUNCTION: BF2 0x57e3b0
namespace dice { namespace hfe { namespace world {
extern void fn_57e250(void* a, int b);
void handlePlayerInputCVMTrace_0x57e3b0(void* self, void* arg2, void* arg3) {
    if ((*(char*)((char*)arg3 + 0x104) & 8) && *(float*)((char*)arg3 + 0x8c) > *(float*)0xb2f234) {
        if (!*(char*)((char*)self + 0x328)) {
            return;
        }
        fn_57e250(self, 0);
        if (*(int*)((char*)self + 0x338) != -1)
            *(int*)((char*)self + 0x324) = 0x41200000;
        *(char*)((char*)self + 0x328) = 0;
    } else {
        *(char*)((char*)self + 0x328) = 1;
    }
}
} } }
