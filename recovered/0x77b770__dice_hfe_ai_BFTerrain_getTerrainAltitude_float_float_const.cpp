// FUNCTION: BF2 0x77b770
namespace dice { namespace hfe { namespace ai {

class BFTerrain {
public:
    virtual void _v00(); virtual void _v08();
    virtual float getWaterAltitude(float x, float z) const;
    virtual void _v18(); virtual void _v20(); virtual void _v28(); virtual void _v30();
    virtual void _v38(); virtual void _v40(); virtual void _v48(); virtual void _v50();
    virtual void _v58();
    virtual float getHeight(float x, float z) const;
    float getTerrainAltitude(float x, float z) const;
};

float BFTerrain::getTerrainAltitude(float x, float z) const
{
    float h = getHeight(x, z);
    float w = getWaterAltitude(x, z);
    return h > w ? h : w;
}

} } }
