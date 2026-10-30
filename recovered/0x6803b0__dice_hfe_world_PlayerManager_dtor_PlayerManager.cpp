// FUNCTION: BF2 0x6803b0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <list>
#include <new>

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

typedef std::list<IPlayer*> PlayerList;
typedef std::map<unsigned int, std::string> NameMap;
typedef std::map<int, IPlayer*> IdMap;

class PlayerManager {
public:
    virtual ~PlayerManager();

    char _pad0[0x10];          // 0x08 .. 0x18
    char _players[0x10];       // 0x18
    char _teamSquad[0x10];     // 0x28
    char _squadLeaders[0x10];  // 0x38
    char _table[0x10];         // 0x48
    char _pad1[0x8];           // 0x58
    char _names[0x30];         // 0x60
    char _byId[0x30];          // 0x90
    char _bySlot[0x30];        // 0xc0
};

PlayerManager::~PlayerManager() {
    ((PlayerList*)_players)->clear();
    ((Table*)_table)->clear();
    ((IdMap*)_byId)->clear();
    delete g_pPersistentExplosionEffectManager;
    g_pPersistentExplosionEffectManager = 0;
    ((IdMap*)_bySlot)->~IdMap();
    ((IdMap*)_byId)->~IdMap();
    ((NameMap*)_names)->~NameMap();
    ((Table*)_table)->~Table();
    ((PlayerList*)_squadLeaders)->~PlayerList();
    ((PlayerList*)_teamSquad)->~PlayerList();
    ((PlayerList*)_players)->~PlayerList();
    operator delete(this);
}

} } }
