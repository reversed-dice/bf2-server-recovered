// FUNCTION: BF2 0x6ffaa0
namespace dice { namespace hfe { namespace world {
class Square;
class HeightmapCluster;
} } }

namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
} }

namespace dice { namespace hfe { namespace world {

class Square {
public:
    virtual void v39(float x, float y, void* out, bool& flag);
};

class HeightmapCluster {
public:
    virtual Square* v20(float x, float y);
    bool getSquareInWorldCoords(float x, float y, Vec3* out, bool& flag) const;
};

typedef Square* (*v20_fn)(const HeightmapCluster*, float, float);
typedef void (*v39_fn)(Square*, float, float, void*, bool&);

bool HeightmapCluster::getSquareInWorldCoords(float x, float y, Vec3* out, bool& flag) const
{
    Square* p = ((v20_fn)(*(void***)this)[20])(this, x, y);
    if (p == 0)
        return false;
    ((v39_fn)(*(void***)p)[49])(p, x, y, out, flag);
    return true;
}

} } }
