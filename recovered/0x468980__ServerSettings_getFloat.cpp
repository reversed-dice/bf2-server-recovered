// FUNCTION: BF2 0x468980
extern float g_b317f8;
struct S { char pad[0x90]; float f; char pad2[0xb1]; unsigned char b; };
float get(const S* p) { return p->b ? g_b317f8 : p->f; }
