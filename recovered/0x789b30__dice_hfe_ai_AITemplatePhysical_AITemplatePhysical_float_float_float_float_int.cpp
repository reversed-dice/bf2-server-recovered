// FUNCTION: BF2 0x789b30
namespace dice { namespace hfe {
void eom_789b30(char* self, float a, float b, float c, float d, int e) {
    *(void**)(self + 0x0) = (void*)0xba4a90;
    *(float*)(self + 0x8) = a;
    *(int*)(self + 0x18) = 0;
    *(float*)(self + 0xc) = b;
    *(int*)(self + 0x1c) = e;
    *(char*)(self + 0x20) = 0;
    *(float*)(self + 0x10) = c;
    *(char*)(self + 0x21) = 0;
    *(float*)(self + 0x14) = d;
}
} }
// REVERSED_FUNCTION: test (0x789b30)
