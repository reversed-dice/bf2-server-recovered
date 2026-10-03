// FUNCTION: BF2 0x468890
extern float g_b317fc;
struct S { char pad[0x114]; float f; char pad2[0x2d]; unsigned char b; };
float get(const S* p) { return p->b ? g_b317fc : p->f; }
