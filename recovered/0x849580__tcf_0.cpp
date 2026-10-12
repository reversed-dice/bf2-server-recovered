// FUNCTION: BF2 0x849580
// v2: explicit straight-line order, named local for each handle
extern "C" int dlclose(void*);
extern void* g_h0;
extern void* g_h1;
extern void* g_h2;
extern void* g_f0;
extern void* g_f1;
extern void* g_f2;

void f() {
    void* p;
    p = g_h0;
    g_f0 = 0;
    g_f1 = 0;
    if (p)
        dlclose(p);
    p = g_h1;
    g_h0 = 0;
    if (p)
        dlclose(p);
    p = g_h2;
    g_h1 = 0;
    g_f2 = 0;
    if (p)
        dlclose(p);
    g_h2 = 0;
}
