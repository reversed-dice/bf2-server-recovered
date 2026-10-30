// FUNCTION: BF2 0x5b2de0
#include <string>
#include <vector>
#include <map>
#include <ostream>

namespace dice { namespace hfe {

struct Debug_5b2de0 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_5b2de0(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_5b2de0();
};

} }

namespace dice { namespace hfe { namespace world {

class IObject {};

struct StrategicObjectHolder {
    std::vector<IObject*> m_objects;
    int m_count;
    int m_destroyed;
};

class IArmorGLComp {
public:
    virtual void vfun();
};

class ArmorGLComp : public IArmorGLComp {
public:
    char _pad0[0x8];
    void* m_template;
    void* m_object;
    void updateStrategicObject(bool add);
};

} } }

extern "C" void* g_playerManager_5b2de0;
extern "C" void* g_gameLogic_5b2de0;
extern "C" unsigned int g_iid_IStrategicObjectComp;
extern char DAT_00bb25f1;

typedef void* (*FnGetLocalPlayer)(void*);
typedef void* (*FnQueryInterface)(void*, unsigned int, unsigned int);
typedef const std::string& (*FnGetName)(void*);
typedef int (*FnGetInt)(void*);

namespace dice { namespace hfe { namespace world {

typedef std::map<std::string, StrategicObjectHolder*> HolderMap;
typedef HolderMap& (*FnHolderMap)(void*);

void ArmorGLComp::updateStrategicObject(bool add)
{
    void* pm = g_playerManager_5b2de0;
    if (((FnGetLocalPlayer)(*(void***)pm)[0x60 / 8])(pm) == 0) {
        return;
    }
    void* obj = m_object;
    IObject* so = (IObject*)((FnQueryInterface)(*(void***)obj)[0xb8 / 8])(obj, g_iid_IStrategicObjectComp, g_iid_IStrategicObjectComp);
    if (so == 0) {
        return;
    }
    std::string name(((FnGetName)(*(void***)so)[0x70 / 8])(so));
    int n = ((FnGetInt)(*(void***)so)[0xa0 / 8])(so);
    std::string key(name);
    key.append(1, (char)(n + '0'));
    void* gl = g_gameLogic_5b2de0;
    HolderMap& m = ((FnHolderMap)(*(void***)gl)[0x348 / 8])(gl);
    HolderMap::iterator it = m.find(key);
    if (it == m.end()) {
        dice::hfe::Debug_5b2de0(6, std::string("Game/Objects/GameLogicComp/ArmorGLComp.cpp"), 0x6d0,
                                std::string(&DAT_00bb25f1)).os
            << "Couldn't update number of destroyed parts!";
    } else {
        if (add) {
            StrategicObjectHolder* u = it->second;
            u->m_destroyed++;
        } else {
            StrategicObjectHolder* d = it->second;
            d->m_destroyed--;
        }
    }
}

} } }
