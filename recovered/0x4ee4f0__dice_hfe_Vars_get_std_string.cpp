// FUNCTION: BF2 0x4ee4f0
namespace dice { namespace hfe {
extern void* fn_4edf10(void* a, void* b);
extern void fn_407e08(void* a, void* b, void* c);
void* get_0x4ee4f0(void* self, void* arg2) {
    void* s = fn_4edf10(*(void**)arg2, (void*)0xbb25f1);
    char tmp;
    fn_407e08(self, s, &tmp);
    return self;
}
} }
