// FUNCTION: BF2 0x6f94b0
namespace dice { namespace hfe { namespace world {

class IObject;

class MaterialManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual IObject* getMaterial(unsigned char index);
};

extern MaterialManager* materialManager;

class Heightmap {
public:
    char _pad0[0x28];
    int m_rows;  // +0x28
    int m_cols;  // +0x2c
    char _pad1[0xa0];
    unsigned char* m_data;  // +0xd0

    bool getUsingValidMaterials() const;
};

bool Heightmap::getUsingValidMaterials() const
{
    int const n = m_rows * m_cols;
    for (int i = 0; i < n; ++i) {
        if (materialManager->getMaterial(m_data[i]) == 0)
            return false;
    }
    return true;
}

} } }
