// FUNCTION: BF2 0x707bb0
struct S { char pad[0x40]; unsigned int a; int b; char pad2[0x28]; int c; };
extern "C" int f(S* s) { long r = (long)s->c + (long)s->a * 3 + (long)s->b * 7; return 0x80 + (int)(r * 8); }
// REVERSED_FUNCTION: b1 (0x707bb0)
