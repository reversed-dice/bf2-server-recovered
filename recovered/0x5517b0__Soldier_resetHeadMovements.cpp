// FUNCTION: BF2 0x5517b0
extern void* g_b;
struct S { char pad[0x408]; float f; float a; float b; int c; };
void reset(S* p) { p->f = 1.0f; p->a = 0.0f; p->b = 0.0f; p->c = *(int*)g_b; }
