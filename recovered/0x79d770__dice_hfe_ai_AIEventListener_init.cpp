// FUNCTION: BF2 0x79d770
namespace dice { namespace hfe {

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
    virtual void addListener(int event, void* listener, int zero);

};

extern EventManager* eventManager;

namespace ai {

class AIEventListener {
public:
    char _pad[8];
    bool m_flag;

    void registerEvents();
    void init();
};

void AIEventListener::init() {
    m_flag = true;
    eventManager->addListener(2, this, 0);
    eventManager->addListener(3, this, 0);
    eventManager->addListener(1, this, 0);
    eventManager->addListener(0, this, 0);
    eventManager->addListener(5, this, 0);
    registerEvents();
}

} } }
