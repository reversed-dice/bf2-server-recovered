// FUNCTION: BF2 0x58e680
namespace dice { namespace hfe { namespace world {
extern unsigned int fn_5acef0(void);
extern void fn_5acf10(void* a);
void handleUpdate_0x5acf90(void* self, float a, unsigned b) {
    if (fn_5acef0() > *(unsigned int*)((char*)self + 0x2e4)) {
        fn_5acf10(self);
        ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0, 0x800);
    }
}
} } }
