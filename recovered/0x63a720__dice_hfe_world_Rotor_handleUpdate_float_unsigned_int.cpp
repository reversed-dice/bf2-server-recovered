// FUNCTION: BF2 0x63a720
namespace dice { namespace hfe { namespace world {
extern void* fn_63a6b0(void);
void fn_0x63a720(void* self) {
    if (*(char*)((char*)self + 0x238) != 0) {
        void* r = fn_63a6b0();
        *(char*)((char*)self + 0x238) = 0;
        *(void**)((char*)self + 0x248) = r;
    }
    ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0, 0x800);
}
} } }
