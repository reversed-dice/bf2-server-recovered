// FUNCTION: BF2 0x510960
namespace dice { namespace hfe {

class NametagManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void flagChanged(void* cp);
};

struct SingletonServer { static NametagManager* m_iNametagManager; };

namespace world {

class IObject;
class ControlPoint;

class Object {
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
    virtual void updateFlags(unsigned int set, unsigned int clear);
};

class ControlPointTemplate {
public:
    char m_pad0[0x2b8];
    int m_groupId;
};

class TriggerManager {
public:
    static TriggerManager* m_instance;
    void handleEvent(int type, IObject* obj, int arg);
};

class ControlPoint {
public:
    void setFlag(int flag, bool force);
    void updateFlagPosition();
private:
    char m_pad0[0x248];
    ControlPointTemplate* m_template;
    char m_pad1[0x268 - 0x248 - 8];
    Object* m_flagObjects[3];
    char m_pad2[0x280 - 0x268 - 24];
    int m_flag;
    int m_capturingState;
};


void ControlPoint::setFlag(int flag, bool force) {
    if (m_flag == flag && !force)
        return;
    if (SingletonServer::m_iNametagManager)
        SingletonServer::m_iNametagManager->flagChanged(this);
    for (int i = 0; i < 3; i++) {
        if (m_flagObjects[i])
            m_flagObjects[i]->updateFlags(1, 0);
    }
    if ((unsigned int)flag > 2)
        return;
    if (m_flagObjects[flag])
        m_flagObjects[flag]->updateFlags(0, 1);
    m_flag = flag;
    int groupId = m_template->m_groupId;
    if (groupId != -1 && TriggerManager::m_instance)
        TriggerManager::m_instance->handleEvent(0x10, (IObject*)this, groupId);
    m_capturingState = flag;
    updateFlagPosition();
}

} } }
