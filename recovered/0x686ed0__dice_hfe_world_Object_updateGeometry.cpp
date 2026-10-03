// FUNCTION: BF2 0x686ed0
namespace dice { namespace hfe { namespace world {

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
class IGeometryInstance {
public:
    V10(0) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    virtual void setTransform(const void* m);
    V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V10(3) V(40) V(41) V(42) V(43)
    V(44) V(45) V(46) V(47) V(48) V(49) V(50) V(51)
    virtual IGeometryInstance* getNext();
};
class Object {
public:
    V10(0) V10(1) V10(2) V(30) V(31) V(32) V(33) V(34) V(35)
    virtual const void* getWorldTransform();
#undef V10
#undef V
    void updateGeometry();
    unsigned int m_flags;
    char _padc[0x64];
    IGeometryInstance* m_geometry;
};

void Object::updateGeometry()
{
    if (!m_geometry || !(m_flags & 0x40000000))
        return;
    m_geometry->setTransform(getWorldTransform());
    m_flags &= ~0x40000000;
    for (IGeometryInstance* g = m_geometry->getNext(); g; g = g->getNext())
        g->setTransform(getWorldTransform());
}

} } }
