// FUNCTION: BF2 0x79c0d0
namespace dice { namespace hfe { namespace world {
extern void del_0x004085b8(void* p);
extern void base_0x0079c830(void* self);
extern void del_0x004085b8(void* self);
void dtor_79c0d0(void* self) {
    *(void**)self = (void*)0xba7d90;
    del_0x004085b8(*(void**)((char*)self + 0x8));
    base_0x0079c830(self);
    del_0x004085b8(self);
}
} } }
