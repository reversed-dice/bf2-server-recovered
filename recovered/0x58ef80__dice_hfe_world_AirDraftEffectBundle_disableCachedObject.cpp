// FUNCTION: BF2 0x58ef80
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

class ICached {
public:
    virtual void c0();
    virtual void c1();                      // +0x8
};

class SimpleObject {
public:
    void disableCachedObject();
};

class AirDraftEffectBundle : public SimpleObject {
public:
    char pad_0x0[0x230];
    std::map<int, EffectBundle*> m_bundles;   // +0x230
    char pad_0x260[0x60];
    void* m_2c0;                              // +0x2c0
    char pad_0x2c8[0x8];
    ICached* m_2d0;                           // +0x2d0

    void stopEffect();
    void disableCachedObject();
};

void AirDraftEffectBundle::disableCachedObject() {
    stopEffect();

    if (m_2d0) {
        m_2d0->c1();
        m_2d0 = 0;
    }

    m_2c0 = 0;

    for (std::map<int, EffectBundle*>::iterator it = m_bundles.begin(); it != m_bundles.end(); ++it) {
        it->second->enableCachedObject(1);
    }

    m_bundles.clear();

    SimpleObject::disableCachedObject();
}

} } }
