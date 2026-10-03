// FUNCTION: BF2 0x5d0010
namespace dice { namespace hfe { namespace world {
extern void del_0x00408198(void* p);
extern void base_0x007c3c80(void* self);
void dtor_5d0010(void* self) {
    *(void**)self = (void*)0xb6cd50;
    *(void**)((char*)self + 0x50) = (void*)0xb6cdf8;
    void* m = *(void**)((char*)self + 0x78);
    if (m) {
        del_0x00408198(m);
        *(void**)((char*)self + 0x78) = 0;
    }
    base_0x007c3c80(self);
}
} } }
