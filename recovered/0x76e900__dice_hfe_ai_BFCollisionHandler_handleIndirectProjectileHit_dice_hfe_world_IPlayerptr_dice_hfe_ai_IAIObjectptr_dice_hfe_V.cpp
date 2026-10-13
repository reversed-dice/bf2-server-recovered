// FUNCTION: BF2 0x76e900
#include <string>
#include <ostream>

extern char DAT_00bb25f1;
namespace dice { namespace hfe { namespace ai { struct CommonSingletonServer { static void* m_iAICollisionHandler; }; } } }

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

namespace world {
class IPlayer;
struct Vec3 { float x, y, z; };
}
namespace ai {
class IAIObject;
class IBFCollisionHandler {};
class BFCollisionHandler : public IBFCollisionHandler {
public:
    virtual void handleIndirectProjectileHit(world::IPlayer* p, IAIObject* obj, const world::Vec3& v, int i);
};
}
}
}

void dice::hfe::ai::BFCollisionHandler::handleIndirectProjectileHit(
    dice::hfe::world::IPlayer* player, dice::hfe::ai::IAIObject* obj,
    const dice::hfe::world::Vec3& v, int i)
{
    dice::hfe::ai::BFCollisionHandler* h = (dice::hfe::ai::BFCollisionHandler*)dice::hfe::ai::CommonSingletonServer::m_iAICollisionHandler;
    if (h == 0) {
        dice::hfe::Debug(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                         std::string(&DAT_00bb25f1)).os << "AI::Allocation failed";
    }
    typedef void (*TargetFn)(void*, int, void*, const void*, int);
    TargetFn f2 = (TargetFn)(*(void***)h)[0x20 / 8];
    int x = ((int (*)(void*))(*(void***)player)[0x1d0 / 8])(player);
    f2(h, x, obj, &v, i);
}
