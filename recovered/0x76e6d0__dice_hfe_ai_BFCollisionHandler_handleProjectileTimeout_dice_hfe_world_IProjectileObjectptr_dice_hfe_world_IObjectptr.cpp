// FUNCTION: BF2 0x76e6d0
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace ai { struct CommonSingletonServer { static void* m_iAICollisionHandler; static void* m_iAIMineManager; }; } } }

namespace dice { namespace hfe {
struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};
namespace world {
extern unsigned IID_IProjectileDetonationComp;
extern unsigned CID_StickyCollisionCompTemplate;
class IProjectileObject;
class IObject;
}
namespace ai {
class IBFCollisionHandler {};
class BFCollisionHandler : public IBFCollisionHandler {
public:
    virtual void handleProjectileTimeout(world::IProjectileObject* p, world::IObject* obj);
};
}
}
}
void dice::hfe::ai::BFCollisionHandler::handleProjectileTimeout(
    dice::hfe::world::IProjectileObject* p, dice::hfe::world::IObject* obj)
{
    void* q = ((void* (*)(void*))(*(void***)p)[0xa8/8])(p);
    if (q != 0) {
        int v1 = ((int (*)(void*))(*(void***)q)[0xa8/8])(q);
        int v2 = *(int*)((char*)obj + 0x20);
        void* comp = *(void**)((char*)obj + 0x28);
        bool flag = comp != 0 && ((void* (*)(void*, unsigned))(*(void***)comp)[0xc0/8])(comp, dice::hfe::world::CID_StickyCollisionCompTemplate) != 0;
        dice::hfe::ai::BFCollisionHandler* h = (dice::hfe::ai::BFCollisionHandler*)dice::hfe::ai::CommonSingletonServer::m_iAICollisionHandler;
        if (h == 0) {
            dice::hfe::Debug(6, std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 0x2e,
                             std::string(&DAT_00bb25f1)).os << "AI::Allocation failed";
        }
        ((void (*)(void*, int, int, void*, int))(*(void***)h)[0x48/8])(h, v2, v1, ((void* (*)(void*))(*(void***)obj)[0xd8/8])(obj), flag);
    }
    void* d = ((void* (*)(void*, unsigned, unsigned))(*(void***)obj)[0xb8/8])(obj, dice::hfe::world::IID_IProjectileDetonationComp, dice::hfe::world::IID_IProjectileDetonationComp);
    if (d != 0) {
        if (((unsigned char (*)(void*))(*(void***)d)[0xe8/8])(d) != 0) {
            void* mm = dice::hfe::ai::CommonSingletonServer::m_iAIMineManager;
            ((void (*)(void*, int))(*(void***)mm)[0x28/8])(mm, *(int*)((char*)obj + 0x20));
        }
    }
}
