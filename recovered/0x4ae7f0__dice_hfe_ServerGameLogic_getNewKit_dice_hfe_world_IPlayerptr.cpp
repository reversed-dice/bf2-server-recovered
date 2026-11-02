// FUNCTION: BF2 0x4ae7f0
#include <string>
#include <ostream>
#include <map>

namespace dice { namespace hfe {

enum DebugType { DEBUG_6 = 6 };

struct Vec3 {
    Vec3() : x(0), y(0), z(0) {}
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
    float x, y, z;
};

class Debug {
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& msg);
    ~Debug();
    std::ostream& stream() { return *(std::ostream*)((char*)this + 0x20); }
    char _pad0[0x20];
    char _stream[0x160];
};

namespace world {
class IPlayer;
}

extern void* game;
extern void* objectTemplateManager;
extern unsigned int CID_KitTemplate;

class ServerGameLogic {
public:
    char _pad0[0x48];
    std::map<int, std::string> m_kits;
    int getNewKit(world::IPlayer* pl);
};

int ServerGameLogic::getNewKit(world::IPlayer* pl)
{
    int key = ((int (*)(void*))(*(void***)pl)[0x1d0 / 8])(pl) * 0x100
            + ((int (*)(void*))(*(void***)pl)[0x2e0 / 8])(pl);
    std::map<int, std::string>::iterator it = m_kits.find(key);
    if (it == m_kits.end()) {
        Debug(DEBUG_6, std::string("Game/GameLogic/ServerGameLogic.cpp"), 0xead, std::string("")).stream()
            << "TBM: Unable to create the requested kit!";
        return 0;
    }
    void* tmpl = ((void* (*)(void*, std::string const&))(*(void***)objectTemplateManager)[0x48 / 8])
                 (objectTemplateManager, it->second);
    void* kit = ((void* (*)(void*, unsigned int))(*(void***)tmpl)[0xa0 / 8])(tmpl, CID_KitTemplate);
    if (kit == 0) {
        Debug(DEBUG_6, std::string("Game/GameLogic/ServerGameLogic.cpp"), 0xeb4, std::string("")).stream()
            << "TBM: Unable to create the requested kit! " << it->second;
        return 0;
    }
    void* obj = ((void* (*)(void*, void*, Vec3 const&, Vec3 const&, int, int, int))(*(void***)game)[0xf0 / 8])
                (game, kit, Vec3(), Vec3(), 1, 0, 0);
    if (obj) {
        ((void (*)(void*, void*, void*, void*, int))(*(void***)this)[0x1d8 / 8])
            (this, obj, pl, ((void* (*)(void*))(*(void***)pl)[0x90 / 8])(pl), 1);
        return 1;
    } else {
        void* m = *(void**)0x28;
        if (((unsigned int (*)(void*))(*(void***)m)[0x20 / 8])(m) == CID_KitTemplate)
            return 0;
        Debug(DEBUG_6, std::string("Game/GameLogic/ServerGameLogic.cpp"), 0xebe, std::string("")).stream()
            << "TBM: Unable to create the requested kit!";
        return 0;
    }
}

} }
