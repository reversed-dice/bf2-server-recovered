// FUNCTION: BF2 0x4688d0
extern float g_b317fc;
struct S { char pad[0x11c]; float f; char pad2[0x25]; unsigned char b; };
float get(const S* p) { return p->b ? g_b317fc : p->f; }
