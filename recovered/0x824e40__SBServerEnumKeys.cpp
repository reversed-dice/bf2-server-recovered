// FUNCTION: BF2 0x824e40
namespace dice { namespace hfe {
extern void fn_83ba90(void* a, void* b, void* c);
void SBServerEnumKeys_0x824e40(void* self, void* arg2, void* arg3) {
    void* p18 = *(void**)((char*)self + 0x18);
    struct P { void* a; void* b; } p;
    p.a = arg2;
    p.b = arg3;
    fn_83ba90(p18, (void*)0x824e20, &p);
}
} }
