// FUNCTION: BF2 0x786860
#include <string>
#include <ostream>
extern char DAT_00bb25f1;
namespace dice { namespace hfe {
struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};
namespace world {
class PortalEvent {
public:
    int getType() const;
    int getPortalId() const;
};
}
namespace ai {
class AIObjectMobile {
public:
    class PortalEventCallback {
    public:
        void handleEvent(world::PortalEvent* ev);
    private:
        char _p[0x8];
        void* m_8;
    };
};
void dice::hfe::ai::AIObjectMobile::PortalEventCallback::handleEvent(dice::hfe::world::PortalEvent* ev)
{
    if (ev->getType() == 0) {
        *(int*)((char*)m_8 + 0x28) = ev->getPortalId();
        return;
    }
    if (ev->getType() == 1) {
        *(int*)((char*)m_8 + 0x28) = -1;
        return;
    }
    dice::hfe::Debug(6, std::string("AI/AIInterface/BFKnowledge/AIObjectMobile.cpp"), 0x39,
                     std::string(&DAT_00bb25f1)).os
        << "Unwanted event sent to callback";
}
} } }
