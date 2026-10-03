// FUNCTION: BF2 0x55d0e0
namespace dice { namespace hfe {
extern void fn_0x0048d980(void* self, void* arg);
void dtor_55d0e0(void* self) {
    *(void**)self = (void*)0xb50830;
    char* s = (char*)self + 0x8;
    fn_0x0048d980(s, *(void**)(s + 0x10));
}
} }
