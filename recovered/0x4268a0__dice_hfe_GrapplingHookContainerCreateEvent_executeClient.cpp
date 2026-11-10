// FUNCTION: BF2 0x4268a0
#include <string>

namespace dice { namespace hfe {

namespace io {
class NetworkManager {
public:
    void* getObject(unsigned short id);
};
extern NetworkManager* networkManager;
}

namespace world {
class GrapplingHookRopeContainer;
class ISoldier;

class GrapplingHookRope {
public:
    void initContainer(GrapplingHookRopeContainer* c, ISoldier* s, int i, float f);
};

extern void* playerManager;
extern void* objectTemplateManager;
}

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

class GrapplingHookContainerCreateEvent : public GameEvent {
public:
    unsigned int m_field_10;
    unsigned int m_field_14;
    unsigned int m_field_18;
    unsigned int m_field_1c;

    int executeClient();
};

typedef void* (*Fn0)(void*);
typedef void* (*Fn1)(void*, int);
typedef void* (*Fn2)(void*, std::string const&);

int GrapplingHookContainerCreateEvent::executeClient()
{
    void* obj = io::networkManager->getObject((unsigned short)m_field_14);
    if (obj == 0)
        return 0;
    if ((int)m_field_10 == -1)
        return 0;
    void* player = ((Fn1)(*(void***)world::playerManager)[0x40 / 8])(world::playerManager, (int)m_field_10);
    if (player == 0)
        return 0;
    world::GrapplingHookRope* rope = (world::GrapplingHookRope*)io::networkManager->getObject((unsigned short)m_field_14);
    if (*(char*)((char*)rope + 0x331) == 0)
        return 0;
    void* tmpl = ((Fn2)(*(void***)world::objectTemplateManager)[0x48 / 8])(world::objectTemplateManager,
                                                                           std::string("GrapplingHookRopeContainer"));
    void* container = ((Fn0)(*(void***)tmpl)[0xa8 / 8])(tmpl);
    ((Fn0)(*(void***)container)[0x40 / 8])(container);
    float f = *reinterpret_cast<float*>(&(m_field_1c));
    rope->initContainer((world::GrapplingHookRopeContainer*)container, (world::ISoldier*)(((Fn0)(*(void***)player)[0x148 / 8])(player)),
                        (int)m_field_18, f);
    return 1;
}

} }
