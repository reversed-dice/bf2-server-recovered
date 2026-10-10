// FUNCTION: BF2 0x701d30
namespace dice {
namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

class HeightmapCluster {
public:
    char dummy[8];
    bool intersectRayInWorldCoords(const Vec3& rayStart, const Vec3& rayDir, Vec3& hitPos, float& hitDist, Vec3& hitNormal, unsigned char& hitMaterial, bool checkWater) const;
};

class IHeightmapClusterEditable {
public:
    virtual ~IHeightmapClusterEditable();
};

class HeightmapClusterEditable : public IHeightmapClusterEditable, public HeightmapCluster {
public:
    char pad[0x45 - 8 - 8];
    bool m_disabled;

    bool intersectRayInWorldCoords(const Vec3& rayStart, const Vec3& rayDir, Vec3& hitPos, float& hitDist, Vec3& hitNormal, unsigned char& hitMaterial) const;
};

bool HeightmapClusterEditable::intersectRayInWorldCoords(const Vec3& rayStart, const Vec3& rayDir, Vec3& hitPos, float& hitDist, Vec3& hitNormal, unsigned char& hitMaterial) const {
    if (m_disabled) {
        return false;
    }
    return HeightmapCluster::intersectRayInWorldCoords(rayStart, rayDir, hitPos, hitDist, hitNormal, hitMaterial, true);
}

}
}
}
