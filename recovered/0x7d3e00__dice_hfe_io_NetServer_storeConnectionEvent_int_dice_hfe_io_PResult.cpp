// FUNCTION: BF2 0x7d3e00
extern "C" void* fn_7d4d30(void*, void*);
extern "C" void fn_7d7580(void*, void*);
void fn_7d3e00(void* self, int v, int p) {
    int tmp = v;
    void* r = fn_7d4d30((char*)self + 0x10, &tmp);
    if (r != (void*)((char*)self + 0x18)) {
        void* p2 = *(void**)((char*)r + 0x28);
        if (p2) {
            *(int*)((char*)self + 0x4ac) = p;
            fn_7d7580(p2, (char*)self + 0x4a0);
        }
    }
}