// FUNCTION: BF2 0x7065b0
namespace dice { namespace hfe { namespace world {

class HeightmapCluster {
public:
    virtual unsigned int addRef();
    virtual unsigned int getRef();
    virtual unsigned int release();
    virtual void queryInterface(unsigned int) const;
    virtual ~HeightmapCluster();
    char m_pad0[8];
    int m_v;
};

class IHeightmapClusterEditable {
public:
    virtual unsigned int addRef();
    virtual unsigned int getRef();
    virtual unsigned int release();
    virtual void queryInterface(unsigned int) const;
    virtual ~IHeightmapClusterEditable();
};

class HeightmapClusterEditable : public IHeightmapClusterEditable, public HeightmapCluster {
public:
    virtual unsigned int release();
};

unsigned int HeightmapClusterEditable::release()
{
    HeightmapCluster* p = static_cast<HeightmapCluster*>(this);
    unsigned int n = --m_v;
    if (n == 0)
        delete p;
    return n;
}

} } }
