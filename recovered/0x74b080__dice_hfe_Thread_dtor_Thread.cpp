// FUNCTION: BF2 0x74b080
namespace dice { namespace hfe {
extern void del_0x004085b8(void* p);
void dtor_74b080(void* self) {
    *(void**)self = (void*)0xb9a550;
    del_0x004085b8(*(void**)((char*)self + 0x8));
}
} }
