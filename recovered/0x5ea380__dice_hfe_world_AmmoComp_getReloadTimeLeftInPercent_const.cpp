// FUNCTION: BF2 0x5ea380
namespace dice { namespace hfe {

class WorldPref {
public:
    static unsigned int getTickCount();
};

namespace world {

struct AmmoData {
    char pad[0x18];
    unsigned int m_reloadTime;
};

class AmmoComp {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v0a(); virtual void v0b();
    virtual void v0c(); virtual void v0d(); virtual void v0e(); virtual void v0f();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v1a(); virtual void v1b();
    virtual void v1c(); virtual void v1d(); virtual void v1e(); virtual void v1f();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v2a(); virtual void v2b();
    virtual void v2c(); virtual void v2d(); virtual void v2e(); virtual void v2f();
    virtual void v30(); virtual void v31();
    virtual bool isReloading() const;

    char pad[0x4c - 8];
    unsigned int m_reloadEndTime;
    char pad2[0x80 - 0x50];
    AmmoData* m_data;

    float getReloadTimeLeftInPercent() const;
};

float AmmoComp::getReloadTimeLeftInPercent() const {
    float res = 0.0f;
    if (isReloading()) {
        unsigned int diff = m_reloadEndTime - WorldPref::getTickCount();
        res = (float)diff / (float)m_data->m_reloadTime;
    }
    return res;
}

} } }
