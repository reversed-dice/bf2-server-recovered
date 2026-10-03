// FUNCTION: BF2 0x5ad8d0
namespace dice { namespace hfe {
extern void sub_0x005910b0(void* self, void* arg);
extern void del_0x0058b170(void* self);
void dtor_5ad8d0(void* self) {
    *(void**)self = (void*)0xb65bb0;
    *(void**)((char*)self + 0x100) = (void*)0xb65ed0;
    char* s230 = (char*)self + 0x230;
    sub_0x005910b0(s230, *(void**)(s230 + 0x10));
    del_0x0058b170(self);
}
} }
