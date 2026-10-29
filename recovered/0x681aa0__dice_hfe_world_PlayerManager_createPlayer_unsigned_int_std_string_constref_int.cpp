// FUNCTION: BF2 0x681aa0
#include <strings.h>
#include <string>

namespace dice { namespace hfe { namespace world {

class CPersistentExplosionEffectManager;
extern CPersistentExplosionEffectManager* g_pPersistentExplosionEffectManager;

class IPlayer {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void setName(std::string const& name);      // slot 8, +0x40
    virtual void v9();
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
};

class IPlayerManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void addPlayer(IPlayer* p);                 // slot 4, +0x20
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual IPlayer* getPlayerFromId(int id);           // slot 8, +0x40
    virtual void v9();
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
    virtual void setActivePlayer(IPlayer* p);           // slot 33, +0x108
};

struct NameEntry {
    NameEntry* next;
    std::string name;
    IPlayer* player;
};

struct NameTable {
    NameEntry** slots;
    unsigned int count;
};

}}}

namespace dice { namespace hfe {

class Player : public world::IPlayer {
public:
    Player(int id, world::CPersistentExplosionEffectManager* mgr);
    char _pad[0x590 - 8];
};

}}

namespace dice { namespace hfe { namespace world {

class PlayerManager : public IPlayerManager {
public:
    char _pad0[0x40];
    NameTable m_names;                                  // +0x48

    Player* createPlayer(unsigned int playerClass, std::string const& name, int id);
};

Player* PlayerManager::createPlayer(unsigned int playerClass, std::string const& name, int id)
{
    (void)playerClass;
    unsigned int i = 0;
    if (id < 0) {
        while (getPlayerFromId((int)i) != 0) ++i;
    } else if (getPlayerFromId(id) != 0) {
        return 0;
    }

    const char* s = name.c_str();
    unsigned int len = (unsigned int)name.size();
    unsigned int hash = 0;
    NameTable& t = m_names;
    if (len != 0) {
        unsigned int k = 0;
        unsigned int a = 0x38462u;
        unsigned int b = 0x9ba2u;
        for (; k < len; ++k) {
            int c = s[k];
            if (c >= 'a' && c <= 'z') c -= 0x20;
            hash += ((c << ((a & 7) - (b & 7) + 16)) + (hash << ((b & 3) - (a & 3) + 15))) >> 14 | k;
            a -= 0x76dcbaccu;
            b += 0x57542289u;
        }
    }
    unsigned int h = hash >> 16;
    hash = h + hash + h - h;
    unsigned int idx = hash % t.count;
    NameEntry* e = t.slots[idx];
    while (e != 0) {
        if (strcasecmp(e->name.c_str(), s) == 0) {
            setActivePlayer(0);
            return 0;
        }
        e = e->next;
    }

    Player* p = new Player(id, g_pPersistentExplosionEffectManager);
    if (p == 0) {
        setActivePlayer(0);
        return 0;
    }
    p->setName(name);
    addPlayer(p);
    return p;
}

}}}
