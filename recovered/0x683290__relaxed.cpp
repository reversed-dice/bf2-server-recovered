// FUNCTION: BF2 0x683290
namespace dice { namespace hfe {
extern void fn_0x00683220(void* self, void* arg);
void dtor_55d0e0(void* self) {
    *(void**)self = (void*)0xb8c570;
    char* s = (char*)self + 0x8;
    fn_0x00683220(s, *(void**)(s + 0x10));
}
} }
