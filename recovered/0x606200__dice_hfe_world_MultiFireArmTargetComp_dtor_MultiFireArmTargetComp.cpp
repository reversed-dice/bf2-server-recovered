// FUNCTION: BF2 0x606200
namespace dice { namespace hfe { namespace world {
extern void base_0x00608e20(void* self);
extern void del_0x004085b8(void* self);
void dtor_606200(void* self) {
    *(void**)self = (void*)0xb76c30;
    *(void**)((char*)self + 0x20) = (void*)0xb76e08;
    base_0x00608e20(self);
    del_0x004085b8(self);
}
} } }
