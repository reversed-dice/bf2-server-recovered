// FUNCTION: BF2 0x5676b0
#include <list>
#include <set>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

} }

namespace dice { namespace hfe { namespace world {

class IObject {
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
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual const Vec3& getPosition();
    unsigned char m_pad0[0x200 - 0x8];
    int m_id;
};

class Trigger {
public:
    unsigned char m_pad0[0x28];
    IObject* m_object;                             // 0x28
    unsigned int getTypes() const;
    bool isInArea(const Vec3& p) const;
    void updateOnEvent(int type, IObject* obj);
};

class TriggerManager {
public:
    unsigned char m_pad0[0x08];
    std::list<Trigger*> m_triggers;                // 0x08
    std::set<Trigger*> m_active;                   // 0x20

    void handleEvent(int type, IObject* obj, int id);
};

void TriggerManager::handleEvent(int type, IObject* obj, int id) {
    if ((obj != 0) & (type == 2)) {
        for (std::set<Trigger*>::iterator it = m_active.begin(); it != m_active.end(); ++it) {
            Trigger* t = *it;
            if ((id == -1 || id == t->m_object->m_id) && (t->getTypes() & type)) {
                if (t->isInArea(obj->getPosition()))
                    t->updateOnEvent(type, obj);
            }
        }
    } else if ((obj != 0) & (type == 0x10)) {
        for (std::list<Trigger*>::iterator it = m_triggers.begin(); it != m_triggers.end(); ++it) {
            Trigger* t = *it;
            if ((id == -1 || id == t->m_object->m_id) && (t->getTypes() & type))
                t->updateOnEvent(type, obj);
        }
    } else if ((obj != 0) & (type == 8)) {
        for (std::list<Trigger*>::iterator it = m_triggers.begin(); it != m_triggers.end(); ++it) {
            Trigger* t = *it;
            if ((id == -1 || id == t->m_object->m_id) && (t->getTypes() & type)) {
                if (t->isInArea(obj->getPosition()))
                    t->updateOnEvent(type, obj);
            }
        }
    }
}

} } }
