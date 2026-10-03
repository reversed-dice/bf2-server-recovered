// FUNCTION: BF2 0x5d68d0
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void base_0x007c3c80(void* self);
void dtor_5c62f0(void* self) {
    *(void**)self = (void*)0xb6d610;
    *(void**)((char*)self + 0x50) = (void*)0xb6d6b8;
    void* m = *(void**)((char*)self + 0x78);
    if (m) {
        del_0x00408198(m);
        *(void**)((char*)self + 0x78) = 0;
    }
    base_0x007c3c80(self);
}
} } }
