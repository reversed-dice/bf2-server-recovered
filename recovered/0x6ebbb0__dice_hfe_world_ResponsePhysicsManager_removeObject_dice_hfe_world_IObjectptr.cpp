// FUNCTION: BF2 0x6ebbb0
#include <string>
#include <ostream>

namespace dice { namespace hfe { namespace world {

class IObject;
class IResponsePhysics;

struct ResponsePhysicsList {
    IResponsePhysics* head;
    IResponsePhysics* tail;
};

class IObject {
public:
    char _pad0[0x88];
    void* m_88;
    void* m_90;
};

class IResponsePhysics {
public:
    virtual void addRef();                       // +0x00 slot 0
    virtual void getRef();                       // +0x08 slot 1
    virtual void release();                      // +0x10 slot 2
    virtual void* queryInterface(unsigned int);  // +0x18 slot 3
    virtual void v4();                           // +0x20 slot 4
    virtual void v5();                           // +0x28 slot 5
    virtual void setEnabled(bool);               // +0x30 slot 6
    virtual bool getEnabled() const;             // +0x38 slot 7
    virtual void reset();                        // +0x40 slot 8
    virtual unsigned int getClassID() const;     // +0x48 slot 9
    virtual void v10();                          // +0x50
    virtual void v11();                          // +0x58
    virtual void v12();                          // +0x60
    virtual void v13();                          // +0x68
    virtual void v14();                          // +0x70
    virtual void v15();                          // +0x78
    virtual void v16();                          // +0x80
    virtual void v17();                          // +0x88
    virtual void v18();                          // +0x90
    virtual void v19();                          // +0x98
    virtual void v20();                          // +0xa0
    virtual void v21();                          // +0xa8
    virtual void v22();                          // +0xb0
    virtual void v23();                          // +0xb8
    virtual void v24();                          // +0xc0
    virtual void v25();                          // +0xc8
    virtual void v26();                          // +0xd0
    virtual void v27();                          // +0xd8
    virtual void v28();                          // +0xe0
    virtual void v29();                          // +0xe8
    virtual void v30();                          // +0xf0
    virtual void v31();                          // +0xf8
    virtual void v32();                          // +0x100
    virtual void v33();                          // +0x108
    virtual void v34();                          // +0x110
    virtual void v35();                          // +0x118
    virtual void v36();                          // +0x120
    virtual void v37();                          // +0x128
    virtual void v38();                          // +0x130
    virtual void v39();                          // +0x138
    virtual void v40();                          // +0x140
    virtual char isInList() const;               // +0x148 slot 41
    void removeFromList(ResponsePhysicsList& list);
};

class ResponsePhysicsManager {
public:
    void removeObject(IObject* obj);
    char _pad0[0x10];
    ResponsePhysicsList m_list10;
    ResponsePhysicsList m_list20;
    ResponsePhysicsList m_list30;
    ResponsePhysicsList m_list40;
    ResponsePhysicsList m_list50;
};

extern unsigned int CID_ResponsePhysics;
extern unsigned int CID_PointResponsePhysics;
extern unsigned int CID_RotationalPointResponsePhysics;
extern unsigned int CID_SoldierResponsePhysics;

} } }

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

} }

extern char DAT_00bb25f1;

namespace dice { namespace hfe { namespace world {

void ResponsePhysicsManager::removeObject(IObject* obj)
{
    IResponsePhysics* node = *(IResponsePhysics**)((char*)obj + 0x90);
    if (!node) return;
    char qi = node->isInList();
    if (!qi) return;
    if (*(void**)((char*)obj + 0x88) == 0) {
        Debug(6, std::string("Physics/ResponseManager.cpp"), 305, std::string("")).os << "Object does not have a physics node.";
    }
    if (qi == 5) {
        node->removeFromList(m_list50);
    } else {
        if (node->getClassID() == CID_ResponsePhysics) {
            node->removeFromList(m_list10);
        } else if (node->getClassID() == CID_PointResponsePhysics) {
            node->removeFromList(m_list20);
        } else if (node->getClassID() == CID_RotationalPointResponsePhysics) {
            node->removeFromList(m_list30);
        } else if (node->getClassID() == CID_SoldierResponsePhysics) {
            node->removeFromList(m_list40);
        } else {
            node->getClassID();
        }
    }
}

} } }
