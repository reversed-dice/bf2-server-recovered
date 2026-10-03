// FUNCTION: BF2 0x4986b0
typedef void* (*QIFn)(void*, int);
typedef void* (*VFn1)(void*);
typedef void (*VFn3)(void*, int, int, int);
extern "C" void dice_hfe_Player_setFreeCameraEnabled_bool(void* self, unsigned char enable) {
    if (!enable || *(char*)((char*)self + 0xa9) == 0) {
        *(char*)((char*)self + 0xa8) = enable;
        if (enable) {
            void* a = *(void**)((char*)self + 0xa0);
            if (a) {
                void* first = *(void**)((char*)a + 0x8);
                if (first) {
                    void* e = first;
                    for (;;) {
                        void* res = ((QIFn)(*(void***)e)[0x18 / 8])(e, *(int*)0x00c7ce6c);
                        if (res) {
                            void* obj2 = ((VFn1)(*(void***)res)[0x88 / 8])(res);
                            if (obj2)
                                ((VFn3)(*(void***)obj2)[0x30 / 8])(obj2, 1, 0, 1);
                            return;
                        }
                        e = *(void**)((char*)e + 0x50);
                        if (!e) return;
                    }
                }
            }
        }
    }
}