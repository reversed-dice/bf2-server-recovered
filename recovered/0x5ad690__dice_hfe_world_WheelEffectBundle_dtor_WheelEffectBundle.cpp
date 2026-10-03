// FUNCTION: BF2 0x5ad690
namespace dice { namespace hfe { namespace world {
extern void sub_0x005910b0(void* self, void* arg);
extern void base_0x0058b170(void* self);
extern void del_0x004085b8(void* self);
void dtor_5ad690(void* self) {
    *(void**)self = (void*)0xb65bb0;
    *(void**)((char*)self + 0x100) = (void*)0xb65ed0;
    char* s0 = (char*)(self) + 0x230;
    sub_0x005910b0(s0, *(void**)(s0 + 0x10));
    base_0x0058b170(self);
    del_0x004085b8(self);
}
} } }
