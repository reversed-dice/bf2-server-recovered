// FUNCTION: BF2 0x69d050
namespace dice { namespace hfe { namespace world {
extern void fn_69ceb0(void* a, void* b);
void fn_0x69d050(void* self, void* p, float f, void* a, void* b) {
    *(void**)((char*)self + 0x20) = p;
    *(float*)((char*)self + 0x28) = f;
    *(void**)((char*)self + 0x30) = a;
    *(void**)((char*)self + 0x40) = b;
    fn_69ceb0(self, *(void**)((char*)self + 0xf8));
}
} } }
