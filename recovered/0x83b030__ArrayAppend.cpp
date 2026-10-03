// FUNCTION: BF2 0x83b030
namespace dice { namespace hfe {
extern void fn_0x83af60(void* arr, int x, int n);
void ArrayAppend_0x83b030(void* arr, int x) {
    if (arr)
        fn_0x83af60(arr, x, *(int*)arr);
}
} }
