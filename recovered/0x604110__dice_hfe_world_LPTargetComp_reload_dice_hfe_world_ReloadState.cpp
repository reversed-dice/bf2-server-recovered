// FUNCTION: BF2 0x604110
namespace dice { namespace hfe { namespace world {

extern void base_0x006084f0(void* self, int state);

typedef void (*FnFour)(void*, void*, void*, void*);

void reload_0x604110(void* self, int state) {
    FnFour f = (FnFour)(*(void***)self)[0x160 / 8];
    void* a = ((void* (*)(void*))(*(void***)self)[0x168 / 8])(self);
    f(self, a, 0, 0);

    if (*(char*)(*(char**)((char*)self + 0x98) + 0x79) != 0) {
        void* h = *(void**)((char*)self + 0x88);
        if (h != 0) {
            if (--*(int*)h == 0) {
                operator delete(h);
            }
        }
        void** slot = (void**)((char*)self + 0x88);
        *slot = 0;
    }
    base_0x006084f0(self, state);
}

} } }
