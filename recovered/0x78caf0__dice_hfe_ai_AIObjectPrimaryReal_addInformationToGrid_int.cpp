// FUNCTION: BF2 0x78caf0
extern "C" void fn_78c0e0(void*, int, int);
void fn_78caf0(void* self, int idx) {
    int v = *(int*)((int*)self + idx + 0x19);
    if (v != -1) {
        fn_78c0e0(self, v, idx);
        if (idx == *(int*)((char*)self + 0x14)) {
            *(char*)((char*)self + 0x18) = 1;
        }
    }
}