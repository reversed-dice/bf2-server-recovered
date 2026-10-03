// FUNCTION: BF2 0x524550
namespace dice { namespace hfe { namespace world {
extern void base_0x005768d0(void* self);
extern void del_0x004085b8(void* self);
void dtor_524550(void* self) {
    *(void**)self = (void*)0xb43b70;
    *(void**)((char*)self + 0x10) = (void*)0xb43e50;
    *(void**)((char*)self + 0x68) = (void*)0xb43e88;
    *(void**)((char*)self + 0x1c8) = (void*)0xb43f08;
    *(void**)((char*)self + 0x1f8) = (void*)0xb43f70;
    base_0x005768d0(self);
    del_0x004085b8(self);
}
} } }
