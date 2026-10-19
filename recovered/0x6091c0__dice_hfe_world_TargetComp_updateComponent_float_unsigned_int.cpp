// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6091c0
#include <cmath>
#include <cstddef>

namespace dice { namespace hfe { namespace world {

class Vec3 { public: float x, y, z; };

class Pos {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual Vec3* getPos();
};

class TargetObject : public Pos {
public:
    bool getTargetActive();
};

class BuildThing {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void set(int, int);
};

class TargetComp {
public:
    virtual void d0();
    virtual void d1();
    virtual void d2();
    virtual void d3();
    virtual void d4();
    virtual void d5();
    virtual void d6();
    virtual void d7();
    virtual void d8();
    virtual void d9();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void d28();
    virtual void d29();
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void d34();
    virtual bool isActive();
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void d39();
    virtual void d40();
    virtual void d41();
    virtual void d42();
    virtual void d43();
    virtual void fn44(void*, int, int);
    virtual void* fn45();

    void updateComponent(float, unsigned int);
};

void TargetComp::updateComponent(float, unsigned int)
{
    void* m48 = *(void**)((char*)this + 0x48);
    if (m48 != 0) {
        TargetObject* q = (TargetObject*)*(void**)((char*)m48 + 8);
        if (q != 0) {
            Pos* h = (Pos*)*(void**)((char*)this + 0x18);
            Vec3* p1 = h->getPos();
            Vec3* p2 = q->getPos();
            float dy = p2->y - p1->y;
            float dz = p2->z - p1->z;
            float dx = p2->x - p1->x;
            float dist = sqrtf(dx * dx + dy * dy + dz * dz);
            if (*(unsigned char*)((char*)this + 0x50) != 0) {
                if (!q->getTargetActive() ||
                    dist > *(float*)((char*)*(void**)((char*)this + 0x78) + 0x4c))
                    fn44(fn45(), 0, 0);
            }
        }
    }
    if (*(void**)((char*)this + 0x68) != 0) {
        if (isActive())
            ((BuildThing*)*(void**)((char*)this + 0x68))->set(2, 0);
        else
            ((BuildThing*)*(void**)((char*)this + 0x68))->set(0, 2);
    }
}

}}}
