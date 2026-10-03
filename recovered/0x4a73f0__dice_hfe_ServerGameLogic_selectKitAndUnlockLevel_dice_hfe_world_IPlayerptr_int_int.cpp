// FUNCTION: BF2 0x4a73f0
namespace dice { namespace hfe {
int selectKitAndUnlockLevel_0x4a73f0(void* self, void* kit, int a, int b) {
    if (!kit)
        return 0;
    ((void (*)(void*, int))(*(void***)kit)[0x5b])(kit, a);
    void* fn = (*(void***)kit)[0x94];
    int r = ((int (*)(void*))(*(void***)kit)[0x3a])(kit);
    ((void (*)(void*, int, int, int))fn)(kit, a, r, b);
    return 1;
}
} }
