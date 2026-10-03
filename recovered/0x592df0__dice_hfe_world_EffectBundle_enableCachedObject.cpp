// FUNCTION: BF2 0x592df0
namespace dice { namespace hfe { namespace world {
extern void fn_5741c0(void);
void enableCachedObjects_0x592df0(void* self) {
    fn_5741c0();
    void* p = *(void**)((char*)self + 0x28);
    *(int*)((char*)self + 0x24c) = 0;
    *(char*)((char*)self + 0x24a) = 0;
    if (*(char*)((char*)p + 0x39c)) {
        ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0, 1);
        ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0x800, 0);
        *(char*)((char*)self + 0x248) = 1;
    } else {
        *(char*)((char*)self + 0x248) = 0;
    }
}
} } }
