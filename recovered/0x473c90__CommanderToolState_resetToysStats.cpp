// FUNCTION: BF2 0x473c90
struct Vec3 { float x; float y; float z; };
struct S { char pad[0x1c]; Vec3 v; int d; int e; int f; };
void reset(S* p) { p->v.x=0.0f; p->v.y=0.0f; p->v.z=0.0f; p->d = 0; p->e = 0; p->f = 0; }
