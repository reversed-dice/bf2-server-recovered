// FUNCTION: BF2 0x40c920
struct C { void* a; void* b; unsigned char c; char pad[7]; void* d; void* e; void* f; };
void init(C* p) {
    p->a = (void*)0xf6c6e8; p->b = (void*)0xf6c6e8; p->c = 1;
    void** v = &p->d; v[0] = 0; v[1] = 0; v[2] = 0;
}
