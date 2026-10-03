// FUNCTION: BF2 0x5ef2b0
struct Vec3 { float x; float y; float z; };
struct S { void* v1; void* v2; Vec3 a; float f1c; float f20; };
void ctor(S* p) {
    p->v1 = (void*)0xb71630; p->v2 = (void*)0xb716b8;
    p->a.x=0.0f; p->a.y=0.0f; p->a.z=0.0f; p->f1c=0.0f; p->f20=0.0f;
}
