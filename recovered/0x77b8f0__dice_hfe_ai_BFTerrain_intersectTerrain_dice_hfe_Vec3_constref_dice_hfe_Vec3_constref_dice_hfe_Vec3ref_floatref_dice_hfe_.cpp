// FUNCTION: BF2 0x77b8f0
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace ai {
class ITerrainImpl {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual bool intersect(Vec3 const&, Vec3 const&, Vec3&, float&, Vec3&, unsigned char&, int) const;
};
class BFTerrain {
public:
    char pad0[8];
    ITerrainImpl* m_impl;
    bool intersectTerrain(Vec3 const& a, Vec3 const& b, Vec3& out, float& t, Vec3& n) const;
};
bool BFTerrain::intersectTerrain(Vec3 const& a, Vec3 const& b, Vec3& out, float& t, Vec3& n) const {
    unsigned char c;
    return m_impl->intersect(a, b, out, t, n, c, 1);
}
} } }
