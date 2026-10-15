// FUNCTION: BF2 0x6f9540
// BF2_FLAGS: -fno-strict-aliasing
#include <string.h>

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
    int m_rows;
    int m_cols;
    char _pad1[0xa0];
    unsigned char* m_data;

    void replaceNonMappedMaterials(int id);
};

void Heightmap::replaceNonMappedMaterials(int id)
{
    int cache[256];
    memset(cache, 0xff, sizeof(cache));
    int const n = m_rows * m_cols;
    for (int i = 0; i < n; ++i) {
        unsigned char m = m_data[i];
        if (cache[m] < 0) {
            if (cache[m] == -1)
                cache[m] = materialManager->getMaterial(m) ? (int)m : -2;
            if (cache[m] == -2)
                m_data[i] = (unsigned char)id;
        }
    }
}

} } }
