// FUNCTION: BF2 0x473eb0

namespace dice { namespace hfe {

class EventNode;

enum EventCategory { EC_0 = 0, EC_1, EC_2, EC_3, EC_4 };

class IEventListener {
public:
    virtual void handleEvent(EventCategory, unsigned int, EventNode*, void*);
};

class EventManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void registerEventHandler(EventCategory, IEventListener*, int);
};

extern EventManager* eventManager;

} }

namespace dice { namespace hfe { namespace world {

class CommanderToolState {
public:
    CommanderToolState();
    char _pad[0x38];
};

class CommanderToolsManager : public dice::hfe::IEventListener {
public:
    CommanderToolsManager();
    virtual void handleEvent(dice::hfe::EventCategory, unsigned int, dice::hfe::EventNode*, void*);
    static CommanderToolsManager* m_instance;
    CommanderToolState m_states[2];
    double m_d0;
    double m_d1;
    double m_d2;
};

CommanderToolsManager* CommanderToolsManager::m_instance = 0;

CommanderToolsManager::CommanderToolsManager()
{
    if (m_instance == 0) {
        dice::hfe::eventManager->registerEventHandler(dice::hfe::EC_0, this, 0);
        m_instance = this;
    }
    double z = 0.0;
    m_d0 = z;
    m_d1 = z;
    m_d2 = z;
}

} } }
