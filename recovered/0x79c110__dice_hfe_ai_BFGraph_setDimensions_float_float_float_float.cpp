// FUNCTION: BF2 0x79c110
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe {
namespace ai {

class Vec4 {
public:
    float x, y, z, w;
};

class IBFGraph {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void setDimensions(Vec4 const&);
};

class BFGraph {
public:
    char _pad0[0x8];
    IBFGraph* m_pImpl;

    void setDimensions(float, float, float, float);
};

typedef void (*DimFn)(IBFGraph*, Vec4 const&);

void BFGraph::setDimensions(float a, float b, float c, float d)
{
    IBFGraph* p = m_pImpl;
    void** vtbl = *(void***)p;
    DimFn fn = (DimFn)vtbl[4];
    Vec4 v;
    v.x = a;
    v.y = b;
    v.z = c;
    v.w = d;
    fn(p, v);
}

} // namespace ai
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_ai_BFGraph_setDimensions_float_float_float_float (0x79c110)
