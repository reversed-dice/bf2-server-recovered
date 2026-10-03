// FUNCTION: BF2 0x5f53b0
namespace dice { namespace hfe {
extern int fn_0x0074aaa0(void* self);
void f_5f53b0(void* self, int a) {
    if (a != 0x2)
        *(int*)((char*)self + 0x48) = fn_0x0074aaa0(self);
}
} }
