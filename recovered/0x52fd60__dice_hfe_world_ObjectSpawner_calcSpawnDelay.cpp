// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x52fd60
#include <string>

namespace dice { namespace hfe {

class Settings {
public:
    virtual ~Settings();
    virtual void dummy1();
    virtual void dummy2();
    virtual int* get(std::string const& name, int* defVal);
};

extern Settings* settings;

namespace world {

class IPlayerManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void updatePlayers();
};
extern IPlayerManager* playerManager;

class ObjectSpawnerData {
public:
    char _pad0[0x210];
    float m_lo;
    float m_hi;
};

class ObjectSpawner {
public:
    void calcSpawnDelay();
    char _pad0[0x270];
    ObjectSpawnerData* m_data;
    char _pad1[0x29c - 0x278];
    float m_spawnDelay;
};

void ObjectSpawner::calcSpawnDelay() {
    playerManager->updatePlayers();
    int def;
    settings->get(std::string("GSMaxNrOfPlayers"), (def = 0x10, &def));
    m_spawnDelay = (m_data->m_hi - m_data->m_lo) * 0.0f + m_data->m_lo;
}

} } }
