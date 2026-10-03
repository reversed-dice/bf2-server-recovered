// FUNCTION: BF2 0x5babc0
namespace dice { namespace hfe { namespace world {
void setHealingActive_0x5bab70(void* self, bool a) {
    if (a) {
        if (*(char*)((char*)self + 0x21) != 0)
            return;
        void* g = *(void**)0x010aa288;
        ((void (*)(void*, void*))(*(void***)g)[0xb])(g, (char*)*(void**)((char*)self + 0x10) + 0x20);
        *(char*)((char*)self + 0x21) = 1;
    } else {
        if (*(char*)((char*)self + 0x21) == 0)
            return;
        void* g = *(void**)0x010aa288;
        ((void (*)(void*, void*))(*(void***)g)[0xc])(g, (char*)*(void**)((char*)self + 0x10) + 0x20);
        *(char*)((char*)self + 0x21) = 0;
    }
}
} } }
