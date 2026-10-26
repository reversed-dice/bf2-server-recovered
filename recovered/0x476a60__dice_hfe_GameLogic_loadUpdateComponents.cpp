// FUNCTION: BF2 0x476a60
#include <map>

namespace dice { namespace hfe {

namespace world {
extern void* objectManager;
}

typedef void* (*Vfn168)(void*);
typedef void (*Vfn170)(void*);
typedef std::map<int, void*> Map;

struct Container {
    Map m_map;
};

class GameLogic {
public:
    char _pad[0x448];
    bool m_448;
    bool loadUpdateComponents();
};

bool GameLogic::loadUpdateComponents() {
    void* om = world::objectManager;
    Container* c = (Container*)((Vfn168)(*(void***)om)[0x168 / 8])(om);
    Map::iterator end = c->m_map.end();
    Map::iterator it = c->m_map.begin();
    for (; it != end; ++it) {
        if (m_448) {
            return false;
        }
        void* o = it->second;
        ((Vfn170)(*(void***)o)[0x170 / 8])(o);
    }
    return true;
}

} }
