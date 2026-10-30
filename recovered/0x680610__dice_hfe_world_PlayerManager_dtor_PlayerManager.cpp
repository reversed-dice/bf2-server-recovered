// from api 99.31%
// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x680610
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class CPersistentExplosionEffectManager {
public:
    ~CPersistentExplosionEffectManager();
};

extern CPersistentExplosionEffectManager* g_pPersistentExplosionEffectManager;

struct Entry {
    Entry* next;
    std::string key;
};

class Table {
public:
    Entry** slots;
    unsigned int count;

    void clear() {
        for (unsigned int i = 0; i < count; ++i) {
            Entry* e = slots[i];
            while (e != 0) {
                Entry* nx = e->next;
                delete e;
                e = nx;
            }
            slots[i] = 0;
        }
    }

    ~Table() {
        clear();
        if (slots != 0) {
            operator delete[](slots);
        }
    }
};

class PlayerManager {
public:
    virtual ~PlayerManager();

    char _pad0[0x10];
    std::list<IPlayer*> m_players;        // 0x18
    std::list<IPlayer*> m_teamSquad;      // 0x28
    std::list<IPlayer*> m_squadLeaders;   // 0x38
    Table m_table;                        // 0x48
    char _pad1[8];                        // 0x58
    std::map<unsigned int, std::string> m_names;  // 0x60
    std::map<int, IPlayer*> m_byId;               // 0x90
    std::map<int, IPlayer*> m_bySlot;             // 0xc0
};

PlayerManager::~PlayerManager() {
    m_players.clear();
    m_table.clear();
    m_byId.clear();
    delete g_pPersistentExplosionEffectManager;
    g_pPersistentExplosionEffectManager = 0;
}

} } }
