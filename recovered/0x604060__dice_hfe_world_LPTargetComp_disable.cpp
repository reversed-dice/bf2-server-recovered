// FUNCTION: BF2 0x604060
namespace dice { namespace hfe { namespace world {

extern void base_0x00608710(void* self);
extern unsigned int IID_IProjectileObject_0xc7ce9c;

void disable_0x604060(void* self) {
    void* h = *(void**)((char*)self + 0x88);
    if (h != 0) {
        void* p = *(void**)((char*)h + 0x8);
        if (p != 0) {
            void* q = ((void* (*)(void*, unsigned int))(*(void***)p)[3])(p, IID_IProjectileObject_0xc7ce9c);
            if (q != 0 && ((bool (*)(void*))(*(void***)q)[0x78 / 8])(q)) {
                ((void (*)(void*))(*(void***)q)[0x80 / 8])(q);
            }
        }
    }
    void* h2 = *(void**)((char*)self + 0x88);
    if (h2 != 0) {
        if (--*(int*)h2 == 0) {
            operator delete(h2);
        }
        *(void**)((char*)self + 0x88) = 0;
    }
    base_0x00608710(self);
}

} } }
