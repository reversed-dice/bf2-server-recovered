// FUNCTION: BF2 0x468830
extern float g_b317f8;
struct S { char pad[0x94]; float f; char pad2[0xad]; unsigned char b; };
float get(const S* p) { return p->b ? g_b317f8 : p->f; }
