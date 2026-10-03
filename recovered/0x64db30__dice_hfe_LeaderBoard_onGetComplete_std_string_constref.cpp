// FUNCTION: BF2 0x64db30
namespace dice { namespace hfe {
extern void fn_64b6e0(void* a);
extern void fn_64c690(void* a, void* b, int c, int* d);
void onGetComplete_0x64db30(void* self, void* s) {
    fn_64b6e0((char*)self + 8);
    int ab[2];
    ab[1] = 0;
    ab[0] = 0;
    fn_64c690((char*)self + 0x30, s, 2, ab);
    *(int*)((char*)self + 0x4c) = ab[0];
    *(int*)((char*)self + 0x48) = ab[1];
}
} }
