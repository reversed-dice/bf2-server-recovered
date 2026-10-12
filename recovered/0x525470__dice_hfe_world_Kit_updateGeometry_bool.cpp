// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x525470
namespace dice { namespace hfe { namespace world {

class IGeometry {
public:
    virtual void _v0(); virtual void _v1(); virtual void _v2(); virtual void _v3(); virtual void _v4(); virtual void _v5(); virtual void _v6(); virtual void _v7(); virtual void _v8(); virtual void _v9(); virtual void _v10(); virtual void _v11(); virtual void _v12(); virtual void _v13(); virtual void _v14(); virtual void _v15(); virtual void _v16(); virtual void _v17(); virtual void _v18(); virtual void _v19(); virtual void _v20(); virtual void _v21();
    virtual void setVisible(int a, int b);
    virtual void _v23(); virtual void _v24(); virtual void _v25(); virtual void _v26(); virtual void _v27();
    virtual void setLod(int lod);
    virtual int getLod();
    virtual int getLodCount();
};
struct KitTemplateData { char _pad0[0x218]; int defaultLod; };

class Kit {
public:
    void updateGeometry(bool firstPerson);
    char _pad0[0x70];
    IGeometry* m_geometry;
    char _pad78[0x250];
    int m_firstPersonLod;
    char _pad2cc[0x4];
    int m_thirdPersonLod;
    char _pad2d4[0x4];
    KitTemplateData* m_template;
};

void Kit::updateGeometry(bool firstPerson)
{
    IGeometry* g = m_geometry;
    if (!g)
        return;
    if (firstPerson) {
        if (g->getLodCount() > m_firstPersonLod) {
            if (g->getLod() != m_firstPersonLod)
                g->setLod(m_firstPersonLod);
            return;
        }
        m_firstPersonLod = m_template->defaultLod;
        return;
    }
    g->setVisible(0, 0);
    if (g->getLodCount() > m_thirdPersonLod && g->getLod() != m_thirdPersonLod)
        g->setLod(m_thirdPersonLod);
}

} } }
