// FUNCTION: BF2 0x52b030
extern "C" void fn_52aee0(void*, float);
extern "C" void fn_589480(void*, float, float);
void fn_52b030(void* self, float a, float b) {
    if (__builtin_expect(*(long*)((char*)self + 0x600) != 0, 1)) {
        fn_52aee0(self, a);
        fn_589480(self, a, b);
    }
}