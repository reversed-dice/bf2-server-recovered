// FUNCTION: BF2 0x5e36b0
namespace dice { namespace hfe { namespace world {

class Mat4 {
public:
    static Mat4 const& getZero();
};

class Object {
public:
    void updateGeometry();
};

class IAim {
public:
    virtual void s000();
    virtual void s008();
    virtual void s010();
    virtual void s018();
    virtual void s020();
    virtual void s028();
    virtual void s030();
    virtual void s038();
    virtual void s040();
    virtual void s048();
    virtual void s050();
    virtual void s058();
    virtual void s060();
    virtual void s068();
    virtual void s070();
    virtual void s078();
    virtual void s080();
    virtual void s088();
    virtual void s090();
    virtual void s098();
    virtual void setMatrix(Mat4 const&);
};

class GenericFireArm : public Object {
public:
    void updateGeometry();
    unsigned char pad0[0x70];
    IAim* m_p70;
    unsigned char pad1[0x2e0 - 0x78];
    void* m_p2e0;
};

void GenericFireArm::updateGeometry() {
    if (m_p70 != 0 && m_p2e0 != 0) {
        m_p70->setMatrix(Mat4::getZero());
        return;
    }
    Object::updateGeometry();
}

} } }
