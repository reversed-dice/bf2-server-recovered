// FUNCTION: BF2 0x762780
struct S { char pad[0xd4]; float a; int b; float c; float d; float e; float f; int h; float i; };
void reset(S* p) {
    p->b = 0; p->h = 0;
    p->a = 0.0f; p->d = 0.0f; p->c = 0.0f; p->e = 0.0f; p->f = 0.0f; p->i = 0.0f;
}
