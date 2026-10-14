// FUNCTION: BF2 0x4a7eb0
// BF2_FLAGS: -fno-strict-aliasing
extern void base_478dd0(void* self);
extern void reset_4a7a90(void* self);
extern void mgr_50e150(void* self);
extern void mgr_473eb0(void* self);
extern void mgr_569ab0(void* self);
void* operator new(unsigned long);

struct SubObj { long f0, f1, f2, f3, f4, f5; };

void ctor_4a7d40(void* p)
{
    char* self = (char*)p;
    base_478dd0(self);
    *(void**)(self + 0x0) = (void*)0xb35810;
    *(void**)(self + 0x8) = (void*)0xb35e30;
    *(int*)(self + 0x48c) = 1;
    *(int*)(self + 0x494) = -1;
    *(int*)(self + 0x498) = 0;
    float z;
    *(unsigned*)&z = 0;
    *(float*)(self + 0x49c) = z;
    *(float*)(self + 0x4a4) = z;
    *(int*)(self + 0x4a8) = 0x41000000;
    *(float*)(self + 0x4ac) = z;
    *(int*)(self + 0x4b0) = 0;
    *(char*)(self + 0x4b4) = 0;
    *(int*)(self + 0x4d4) = 0x447a0000;
    SubObj* subs = (SubObj*)(self + 0x4e8);
    char* o = (char*)subs;
    for (long i = 2; i != 0; --i, o += 0x30) {
        *(long*)(o + 0x8) = 0;
        *(long*)(o + 0x28) = 0;
        *(int*)(o + 0x8) = 0;
        *(long*)(o + 0x10) = 0;
        *(long*)(o + 0x18) = (long)(o + 0x8);
        *(long*)(o + 0x20) = (long)(o + 0x8);
    }
    *(int*)(self + 0x550) = 0x3ca3d70a;
    *(char*)(self + 0x554) = 1;
    *(char*)(self + 0x555) = 0;
    *(char*)(self + 0x556) = 0;
    *(char*)(self + 0x557) = 0;
    *(char*)(self + 0x55c) = 0;
    *(int*)(self + 0x560) = 0;
    *(int*)(self + 0x564) = 0;
    *(int*)(self + 0x568) = -1;
    long* q = (long*)(self + 0x570);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    *(char*)(self + 0x588) = 0;
    *(char*)(self + 0x589) = 1;
    *(char*)(self + 0xae) = 1;
    reset_4a7a90(self);
    void* a = operator new(0x10);
    mgr_50e150(a);
    void* b = operator new(0x90);
    mgr_473eb0(b);
    void* c = operator new(0x20);
    mgr_569ab0(c);
}
