// FUNCTION: BF2 0x77ba20
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

class ITerrainManager {
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual bool getTriangle(float x, float z, Vec3& v1, Vec3& v2, Vec3& v3, Vec3& v4, unsigned char& mat);
};

namespace ai {

class BFTerrain {
public:
    char _pad[8];
    ITerrainManager* m_terrain;

    bool getTriangle(const Vec3& pos, Vec3& v1, Vec3& v2, Vec3& v3, Vec3& v4, unsigned char& mat) const;
};

bool BFTerrain::getTriangle(const Vec3& pos, Vec3& v1, Vec3& v2, Vec3& v3, Vec3& v4, unsigned char& mat) const {
    return m_terrain->getTriangle(pos.x, pos.z, v1, v2, v3, v4, mat);
}

} } }
