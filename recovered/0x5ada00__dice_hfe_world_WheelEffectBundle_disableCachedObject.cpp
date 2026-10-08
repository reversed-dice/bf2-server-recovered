// FUNCTION: BF2 0x5ada00
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe { namespace world {

class EffectBundle {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void enableCachedObject(int);   // +0x68
};

class SimpleObject {
public:
    void disableCachedObject();
};

class WheelEffectBundle : public SimpleObject {
public:
    char pad_0x0[0x230];
    std::map<int, EffectBundle*> m_bundles;   // +0x230
    char pad_0x260[0x60];
    void* m_field_2c0;                        // +0x2c0

    void disableCachedObject();
};

void WheelEffectBundle::disableCachedObject() {
    m_field_2c0 = 0;

    for (std::map<int, EffectBundle*>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it) {
        it->second->enableCachedObject(1);
    }

    m_bundles.clear();

    SimpleObject::disableCachedObject();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_WheelEffectBundle_disableCachedObject (0x5ada00)
