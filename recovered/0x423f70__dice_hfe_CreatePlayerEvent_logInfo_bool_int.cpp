// FUNCTION: BF2 0x423f70
extern void* g_112ee38;
typedef void (*F)(void*, int);
void f(void* o) {
    void* p = g_112ee38; if (!p) return;
    F fn = *(F*)(*(char**)p + 0x40);
    fn(p, *(unsigned char*)((char*)o + 0x34));
}
