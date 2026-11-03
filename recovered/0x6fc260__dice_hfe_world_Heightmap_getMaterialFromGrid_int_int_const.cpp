// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6fc260
#include <stdlib.h>

namespace dice { namespace hfe { namespace world {

class IMaterial {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24();
    virtual bool v25();
};

class IMaterialManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8();
    virtual IMaterial* getMaterial(int id);
};

extern IMaterialManager* materialManager;

class Heightmap {
public:
    unsigned int getMaterialFromGrid(int x, int y) const;
    char _pad0[0x28];
    unsigned int m_sizeX;
    unsigned int m_sizeY;
    char _pad30[0x4];
    int m_offX;
    int m_offY;
    char _pad3c[0xcc - 0x3c];
    int m_scale;
    unsigned char* m_materials;
};

unsigned int Heightmap::getMaterialFromGrid(int x, int y) const
{
    if (m_materials) {
        unsigned int gx = x + m_offX;
        unsigned int gy = y + m_offY;
        if (gx < m_sizeX && gy < m_sizeY) {
            int s = m_scale;
            unsigned int mat = m_materials[gx * s + (gy * s) * (m_sizeX * s)];
            if (materialManager->getMaterial(0) && !materialManager->getMaterial(mat))
                abort();
            if (materialManager->getMaterial(mat) && materialManager->getMaterial(mat)->v25())
                abort();
            return mat;
        }
    }
    return 0;
}

} } }
