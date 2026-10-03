// FUNCTION: BF2 0x5ea930
namespace dice { namespace hfe { namespace world {
void disable_0x5ea930(void* self) {
    void* a = *(void**)((char*)self + 0x80);
    if (*(char*)((char*)a + 0x49) != 0) {
        void* b = *(void**)((char*)*(void**)((char*)self + 0x18) + 0x50);
        if (b) {
            void* c = *(void**)((char*)b + 0x28);
            if (((int (*)(void*))(*(void***)c)[0x4])(c) != *(int*)0x00c7d03c)
                return;
        }
    }
    *(int*)((char*)self + 0x68) = 0;
    *(int*)((char*)self + 0x60) = 0;
}
} } }
