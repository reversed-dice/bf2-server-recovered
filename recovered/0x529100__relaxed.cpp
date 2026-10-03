// FUNCTION: BF2 0x529100
namespace dice { namespace hfe { namespace world {
extern void base_0x00539710(void* self);
extern void del_0x004085b8(void* self);
void dtor_5155e0(void* self) {
    *(void**)self = (void*)0xb45f50;
    *(void**)((char*)self + 0x100) = (void*)0xb46530;
    *(void**)((char*)self + 0x238) = (void*)0xb46568;
    *(void**)((char*)self + 0x240) = (void*)0xb46838;
    base_0x00539710(self);
    del_0x004085b8(self);
}
} } }
