// FUNCTION: BF2 0x701a20
namespace dice { namespace hfe { namespace world {
extern bool fn_6ff600(void* a, int b, int c);
extern int fn_6ff5e0(void* a, int b, int c);
void* getHeight_0x701a20(void* self, int a, int b) {
    if (fn_6ff600((char*)self + 8, a, b)) {
        void* v = *(void**)((char*)self + 0x38);
        long idx = fn_6ff5e0((char*)self + 8, a, b);
        return *(void**)((char*)v + idx * 8);
    }
    return 0;
}
} } }
