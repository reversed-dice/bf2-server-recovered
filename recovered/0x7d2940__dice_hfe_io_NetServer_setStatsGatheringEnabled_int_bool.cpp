// FUNCTION: BF2 0x7d2940
extern "C" void* fn_7d4d30(void*, void*);
void fn_7d2940(void* self, int v, char flag) {
    int tmp = v;
    void* r = fn_7d4d30((char*)self + 0x10, &tmp);
    if (r != (void*)((char*)self + 0x18)) {
        void* p2 = *(void**)((char*)r + 0x28);
        if (p2) {
            *(char*)((char*)p2 + 0x38) = flag;
        }
    }
}