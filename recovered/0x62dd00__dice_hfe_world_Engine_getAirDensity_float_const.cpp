// BF2_FLAGS: -fno-tree-dominator-opts
// FUNCTION: BF2 0x62dd00
namespace dice { namespace hfe {

class PhysicsSystem {
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
    virtual float getAirDensityAtSeaLevel() const;
};

namespace world {

class Engine {
public:
    float getAirDensity(float) const;
};

PhysicsSystem* basicPhysicsSystem;

float Engine::getAirDensity(float altitude) const {
    float x = altitude / basicPhysicsSystem->getAirDensityAtSeaLevel();
    if (x < 0.0f)
        return 1.0f;
    if (x > 1.0f)
        return 0.0f;
    return 1.0f - x;
}

} }

}
