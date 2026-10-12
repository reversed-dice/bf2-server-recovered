// FUNCTION: BF2 0x701c90
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {
class HeightmapClusterEditable {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual float v80(float x, float y, float z, int a);
    virtual void v88(float x, float y, float z, int a) const;
    void addWorldScaledHeightInWorldCoords(float x, float y, float z, int a);
};
void HeightmapClusterEditable::addWorldScaledHeightInWorldCoords(float x, float y, float z, int a) {
    float h = v80(x, y, z, a);
    v88(x, y, z + h, a);
}
} } }
