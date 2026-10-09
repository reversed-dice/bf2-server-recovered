// FUNCTION: BF2 0x63b2d0
// BF2_FLAGS: -fno-strict-aliasing
struct Vec3 { float x, y, z; };

class Slot218 {
public:
    virtual void f000();
    virtual void f001();
    virtual void f002();
    virtual void f003();
    virtual void f004();
    virtual void f005();
    virtual void f006();
    virtual void f007();
    virtual void f008();
    virtual void f009();
    virtual void f010();
    virtual void f011();
    virtual void f012();
    virtual void f013();
    virtual void f014();
    virtual void f015();
    virtual void f016();
    virtual void f017();
    virtual void f018();
    virtual void f019();
    virtual void f020();
    virtual void f021();
    virtual void f022();
    virtual void f023();
    virtual void f024();
    virtual void f025();
    virtual void f026();
    virtual void f027();
    virtual void f028();
    virtual void f029();
    virtual void f030();
    virtual void f031();
    virtual void f032();
    virtual void f033();
    virtual void f034();
    virtual void f035();
    virtual void f036();
    virtual void f037();
    virtual void f038();
    virtual void f039();
    virtual void f040();
    virtual void f041();
    virtual void f042();
    virtual void f043();
    virtual void f044();
    virtual void f045();
    virtual void f046();
    virtual void f047();
    virtual void f048();
    virtual void f049();
    virtual void f050();
    virtual void f051();
    virtual void f052();
    virtual void f053();
    virtual void f054();
    virtual void f055();
    virtual void f056();
    virtual void f057();
    virtual void f058();
    virtual void f059();
    virtual void f060();
    virtual void f061();
    virtual void f062();
    virtual void f063();
    virtual void f064();
    virtual void f065();
    virtual void f066();
    virtual float f067();
};

class SelfVt {
public:
    virtual void g00();
    virtual void g01();
    virtual void g02();
    virtual void g03();
    virtual void g04();
    virtual void g05();
    virtual void g06();
    virtual void g07();
    virtual void g08();
    virtual void g09();
    virtual void g10();
    virtual void g11();
    virtual void g12();
    virtual void g13();
    virtual void g14();
    virtual void g15();
    virtual void g16();
    virtual void g17();
    virtual void g18();
    virtual void g19();
    virtual void g20();
    virtual void g21();
    virtual void g22();
    virtual void g23();
    virtual void g24();
    virtual void g25();
    virtual void g26();
    virtual Vec3 const& getAbsolutePosition() const;
};

extern bool bundle_handle_collision(void* self, void* obj, Vec3 const* a, Vec3 const* b,
                                    Vec3 const* c, int i1, int i2, void* f1, void* f2);

bool Spring_handleCollision(void* self_, void* obj, Vec3 const& a, Vec3 const& b, Vec3 const& c,
                            int i1, int i2, void* f1, void* f2) {
    SelfVt* self = (SelfVt*)self_;
    *((unsigned char*)self + 0x238) = 1;
    *((int*)self + 0x248 / 4) = i2;
    Slot218* q = *(Slot218**)((char*)self + 0x88);
    if (0.0f < q->f067())
        *((int*)self + 0x248 / 4) = 1;
    float* d = (float*)((char*)self + 0x25c);
    float bz = b.z;
    float by = b.y;
    float bx = b.x;
    d[0] = bx;
    d[1] = by;
    d[2] = bz;
    Vec3 const& p = self->getAbsolutePosition();
    float* o = (float*)((char*)self + 0x250);
    float pz = c.z + p.z;
    float py = c.y + p.y;
    float px = c.x + p.x;
    o[0] = px;
    o[1] = py;
    o[2] = pz;

    return bundle_handle_collision(self, obj, &a, &b, &c, i1, i2, f1, f2);
}
