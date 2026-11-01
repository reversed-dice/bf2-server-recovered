// FUNCTION: BF2 0x5a3050
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <ostream>

namespace dice { namespace hfe {

enum DebugType { DEBUG_6 = 6 };

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

namespace world {

class Mat4 {
public:
    static Mat4 const& getZero();
};

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

class ParticleTemplate {
public:
    V10(0) V(10)
    virtual std::string const& getName() const;
};

class IGeometryInstance {
public:
    V10(0) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    virtual void setTransform(Mat4 const& m);
    virtual void setTransform(Mat4 const& m, int part);
    V(22) V(23)
    virtual unsigned int getPartCount() const;
    V(25) V(26) V(27) V(28) V(29) V10(3) V(40) V(41) V(42) V(43)
    V(44) V(45) V(46) V(47) V(48) V(49) V(50) V(51)
    virtual IGeometryInstance* getNext();
};

class Particle {
public:
    V10(0) V10(1) V10(2) V(30) V(31) V(32) V(33) V(34) V(35)
    virtual Mat4 const& getVisualAbsoluteTransformation() const;
    char m_pad0[0x20];
    ParticleTemplate* m_template;
    char m_pad1[0x40];
    IGeometryInstance* m_geometry;
    char m_pad2[0x1e4];
    int m_geomPart;
    void updateGeometry();
};

void Particle::updateGeometry()
{
    if (m_geometry == 0)
        return;

    int part = m_geomPart;
    ParticleTemplate* pTemplate = m_template;
    if (part == -1) {
        m_geometry->setTransform(getVisualAbsoluteTransformation());
        for (IGeometryInstance* g = m_geometry->getNext(); g != 0; g = g->getNext())
            g->setTransform(getVisualAbsoluteTransformation());
        return;
    }
    if (part >= (int)m_geometry->getPartCount()) {
        unsigned int partCount = m_geometry->getPartCount();
        std::string const& name = pTemplate->getName();
        Debug(DEBUG_6, std::string("Game/Objects/Fx/Particle.cpp"), 223, std::string("")).stream()
            << name << "::geomPart " << part << " > partCount " << partCount;
        part = 0;
    }
    m_geometry->setTransform(getVisualAbsoluteTransformation(), part);
    for (unsigned int i = 0; i < m_geometry->getPartCount(); ++i) {
        if (i != part)
            m_geometry->setTransform(Mat4::getZero(), i);
    }
}

#undef V10
#undef V

} } }
