// FUNCTION: BF2 0x677990
namespace dice { namespace hfe {
extern void fn_64b6e0(void* a, void* b);
extern void fn_64c690(void* a, void* b, int c, int d);
void onGetComplete_0x677990(void* self, void* arg2) {
    fn_64b6e0((char*)self + 8, arg2);
    fn_64c690((char*)self + 0x30, arg2, 0, 0);
}
} }
