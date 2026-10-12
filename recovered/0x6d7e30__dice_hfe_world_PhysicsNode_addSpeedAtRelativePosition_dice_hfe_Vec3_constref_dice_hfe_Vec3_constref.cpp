#include <math.h>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
}}
namespace dice { namespace hfe { namespace world {
class Node {
public:
    virtual void d00();
    virtual void d01();
    virtual void d02();
    virtual void d03();
    virtual void d04();
    virtual void d05();
    virtual void d06();
    virtual void d07();
    virtual void d08();
    virtual void d09();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual Node* getParent();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual Vec3& getOrigin();
    virtual void d19();
    virtual void d20();
    virtual void d21();
    virtual void d22();
    virtual void d23();
    virtual void d24();
    virtual void d25();
    virtual void d26();
    virtual void d27();
    virtual void vE0(const Vec3&);
    virtual void vE8(const Vec3&);
    virtual void d30();
    virtual void d31();
    virtual void d32();
    virtual void d33();
    virtual void v110(const Vec3&, const Vec3&);
    virtual void v118(const Vec3&, const Vec3&);
    virtual void d36();
    virtual void d37();
    virtual void d38();
    virtual void v138(const Vec3&);
    char _pad08[0xc];
    unsigned char m_b14;
    char _pad15[0x23];
    Vec3 m_acc;
    char _pad44[0xe4];
    unsigned char m_b128;
};
}} }
using dice::hfe::Vec3;
using dice::hfe::world::Node;

// FUNCTION: BF2 0x6d7e30
// BF2_FLAGS: -fno-strict-aliasing
void fn_6d7e30(Node* self, const Vec3& a, const Vec3& b) {
    if (!self->m_b14) return;
    if (self->getParent() && self->m_b128) { self->getParent()->v118(a, b); return; }
    self->vE0(b);
    Vec3 c;
    c.x = a.y * b.z - a.z * b.y;
    c.y = a.z * b.x - a.x * b.z;
    c.z = a.x * b.y - a.y * b.x;
    self->vE8(c);
}
