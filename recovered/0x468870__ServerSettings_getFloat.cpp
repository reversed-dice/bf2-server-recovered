// FUNCTION: BF2 0x468870
extern float g_b26c3c;
struct S { char pad[0x110]; float f; char pad2[0x31]; unsigned char b; };
float get(const S* p) { return p->b ? g_b26c3c : p->f; }
