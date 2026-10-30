// FUNCTION: BF2 0x499800
// dice::hfe::Player::setVehicle(dice::hfe::world::IObject*, int)
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace world {

class ITemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getClassID() const;
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual const std::string& getName() const;
};

extern unsigned int CID_FreeCameraTemplate;
extern unsigned int IID_IObject;

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int iid) const;
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    char _pad0x8[0x20];
    ITemplate* m_template;   // +0x28
};

} } }

namespace dice { namespace hfe {

class Player;

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

extern void* game;

class Player {
public:
    virtual void v0();  virtual void v1();  virtual void v2();  virtual void v3();
    virtual void v4();  virtual void v5();  virtual void v6();  virtual void v7();
    virtual void v8();  virtual void v9();  virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual dice::hfe::world::IObject* getVehicle() const;   // +0x90 slot 18
    virtual bool setVehicle(dice::hfe::world::IObject* obj, int id);
    virtual int getInputId() const;                          // +0xa0 slot 20
    bool _setVehicle(dice::hfe::world::IObject* obj, int id);
    void clearObjectList();
    void buildObjectList(dice::hfe::world::IObject* obj, int id);
    char _pad0x08[0x88];
    void* m_vehicle;         // +0x90
    char _pad0x98[0x38];
    int m_id;                // +0xd0
};

bool Player::setVehicle(dice::hfe::world::IObject* obj, int id)
{
    dice::hfe::world::IObject* cur = getVehicle();
    if ((cur == obj && id == getInputId()) || (cur == 0 && obj == 0))
        return true;

    if (obj != 0 && cur == 0) {
        if (obj->m_template->getClassID() != dice::hfe::world::CID_FreeCameraTemplate) {
            Debug(6, std::string("Game/GameLogic/Player.cpp"), 0x385,
                  std::string(&DAT_00bb25f1)).os
                << "trying to set " << obj->m_template->getName()
                << " without first having a freeCamera as vehicle";
        }
    }
    if (cur != 0 && obj != 0) {
        if (cur->m_template->getClassID() == dice::hfe::world::CID_FreeCameraTemplate) {
            ((void (*)(void*, void*, int, int))(*(void***)dice::hfe::game)[0x150 / 8])(
                dice::hfe::game, this, 1, 1);
        }
    }

    if (!_setVehicle(obj, id))
        return false;

    m_id = id;
    clearObjectList();
    if (m_vehicle != 0) {
        dice::hfe::world::IObject* o = *(dice::hfe::world::IObject**)((char*)m_vehicle + 8);
        if (o != 0) {
            buildObjectList(
                (dice::hfe::world::IObject*)o->queryInterface(dice::hfe::world::IID_IObject),
                m_id);
        }
    }
    return true;
}

} }
