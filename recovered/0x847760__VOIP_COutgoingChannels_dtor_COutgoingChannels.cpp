// FUNCTION: BF2 0x847760
namespace dice { namespace hfe {
extern void fn_0x00847bd0(void* self, void* arg);
void dtor_847760(void* self) {
    *(void**)self = (void*)0xbb8450;
    char* s = (char*)self + 0x8;
    fn_0x00847bd0(s, *(void**)(s + 0x10));
}
} }
