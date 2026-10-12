// FUNCTION: BF2 0x58b700
#include <vector>

namespace dice { namespace hfe { namespace world {

class Material;

class MaterialManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual Material* getMaterial(int id);   // slot 34 (0x110)
};

class Material {
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
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual bool isSpecialA();               // slot 25 (0xc8)
    virtual void v26();
    virtual bool isSpecialB();               // slot 27 (0xd8)
};

extern MaterialManager* materialManager;

struct SpecialMaterialRef {
    int m_0;
    int m_4;
    int m_8;
    int m_c;
};

class SimpleObjectTemplate {
public:
    char m_pad0[0x64];
    unsigned int m_64;
    char m_pad1[0x118 - 0x68];
    std::vector<SpecialMaterialRef> m_118;
    char m_pad2[0x1c4 - 0x130];
    unsigned char m_1c4;

    void CheckForSpecialMaterials();
};

void SimpleObjectTemplate::CheckForSpecialMaterials() {
    for (unsigned int i = 0; i < m_118.size(); ++i) {
        Material* mat = materialManager->getMaterial(m_118[i].m_8);
        if (mat) {
            if (mat->isSpecialB())
                m_64 |= 1;
            if (mat->isSpecialA())
                m_64 |= 2;
        }
    }
    m_1c4 = 1;
}

} } }
