// FUNCTION: BF2 0x473e90
extern "C" void fn_00473b30(void*);
struct Vec3 { float x; float y; float z; };
struct S { char pad[0x10]; Vec3 v; };
void f(S* p) { Vec3* d=&p->v; d->x=0.0f; d->y=0.0f; d->z=0.0f; fn_00473b30(p); }
