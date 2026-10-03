// FUNCTION: BF2 0x5e32e0
namespace dice { namespace hfe { namespace world {
extern void fn_5e3270(void* a, int b);
extern void fn_5e2e80(void* a, int b);
void processStateSyncedData_0x5e32e0(void* self) {
    ((void (*)(void*, int))(*(void***)self)[0x8a])(self, *(int*)((char*)self + 0x348));
    ((void (*)(void*, int, int))(*(void***)self)[0x64])(self, 0, *(int*)((char*)self + 0x340));
    void* p = *(void**)((char*)self + 0x290);
    if (p)
        ((void (*)(void*, int))(*(void***)p)[0x39])(p, *(int*)((char*)self + 0x344));
    fn_5e3270(self, *(int*)((char*)self + 0x350));
    fn_5e2e80(self, *(int*)((char*)self + 0x34c));
    *(char*)((char*)self + 0x338) = 0;
}
} } }
