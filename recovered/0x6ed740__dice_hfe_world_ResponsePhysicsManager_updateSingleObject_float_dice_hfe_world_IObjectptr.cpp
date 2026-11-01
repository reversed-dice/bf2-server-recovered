// FUNCTION: BF2 0x6ed740
#include <string>
#include <ostream>

namespace dice { namespace hfe { namespace world {

class IObject;
class IPhysicsNode;

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
    virtual void v11(float);                     // +0x58
    virtual void v12();                          // +0x60
    virtual void v13(IPhysicsNode*);             // +0x68
    virtual void v14(IPhysicsNode*);             // +0x70
    virtual void v15();                          // +0x78
    virtual void v16();                          // +0x80
    virtual void v17(int);                       // +0x88
};

class IObject {
public:
    char _pad0[0x8];
    unsigned int m_flags;
    char _pad1[0x7c];
    void* m_88;
    void* m_90;
};

} } }

namespace dice { namespace hfe { namespace world {

class IPhysicsNode {
public:
    virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3();
    virtual void n4(); virtual void n5(); virtual void n6(); virtual void n7();
    virtual void n8(); virtual void n9(); virtual void n10(); virtual void n11();
    virtual void n12(); virtual void n13(); virtual void n14(); virtual void n15();
    virtual void n16(); virtual void n17(); virtual void n18(); virtual void n19();
    virtual void n20(); virtual void n21(); virtual void n22(); virtual void n23();
    virtual void n24(); virtual void n25(); virtual void n26(); virtual void n27();
    virtual void n28(); virtual void n29(); virtual void n30(); virtual void n31();
    virtual void n32(); virtual void n33(); virtual void n34(); virtual void n35();
    virtual void n36(); virtual void n37(); virtual void n38(); virtual void n39();
    virtual void n40(); virtual void n41(); virtual void n42(); virtual void n43();
    virtual void n44(); virtual void n45(); virtual void n46(); virtual void n47();
    virtual void n48(); virtual void n49(); virtual void n50(); virtual void n51();
    virtual void n52(); virtual void n53(); virtual void n54(); virtual void n55();
    virtual void n56(); virtual void n57(); virtual void n58(); virtual void n59();
    virtual void n60(); virtual void n61(); virtual void n62(); virtual void n63();
    virtual void n64(); virtual void n65(); virtual void n66(); virtual void n67();
    virtual void n68(); virtual void n69(); virtual void n70(); virtual bool n71();
};

extern unsigned int CID_ResponsePhysics;
extern unsigned int CID_PointResponsePhysics;
extern unsigned int CID_RotationalPointResponsePhysics;
extern unsigned int CID_SoldierResponsePhysics;
extern unsigned int CID_StaticResponsePhysics;
extern int collisionCheckedCounter;

} } }

namespace dice { namespace hfe { namespace world {

class ResponsePhysicsManager {
public:
    void updateSingleObject(float dt, IObject* obj);
    void checkPointObjectVsObjects(float dt, IObject* obj);
    void checkRotationalPointObjectVsObjects(float dt, IObject* obj);
    void checkMeshObjectVsObjects(float dt, IObject* obj);
    void checkSoldierObjectVsObjects(float dt, IObject* obj);
};

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

namespace dice { namespace hfe { namespace world {

void ResponsePhysicsManager::updateSingleObject(float dt, IObject* obj)
{
    unsigned int flags = obj->m_flags & 1;
    if (flags)
        return;
    if (obj->m_flags & 0x100) {
        IResponsePhysics* phys = *(IResponsePhysics**)((char*)obj + 0x90);
        if (phys->getEnabled()) {
            IPhysicsNode* pn = *(IPhysicsNode**)((char*)obj + 0x88);
            if (pn) {
                unsigned int cid = phys->getClassID();
                phys->v17(collisionCheckedCounter - 1);
                if (!pn->n71()) {
                    if (cid == CID_PointResponsePhysics)
                        checkPointObjectVsObjects(dt, obj);
                    else if (cid == CID_RotationalPointResponsePhysics)
                        checkRotationalPointObjectVsObjects(dt, obj);
                    else if (cid == CID_ResponsePhysics)
                        checkMeshObjectVsObjects(dt, obj);
                    else if (cid == CID_SoldierResponsePhysics)
                        checkSoldierObjectVsObjects(dt, obj);
                    else if (cid == CID_StaticResponsePhysics)
                        return;
                    else
                        dice::hfe::Debug(6, std::string("Physics/ResponseManager.cpp"), 504,
                                         std::string("")).os
                            << "Unknown response physics class";
                    phys->v11(dt);
                    phys->v13(pn);
                    phys->v14(pn);
                }
            } else {
                dice::hfe::Debug(6, std::string("Physics/ResponseManager.cpp"), 558,
                                 std::string("")).os
                    << "Making a seprarate collisionDetection test for not physicsNode object; only resetting.";
            }
        }
    }
}

} } }
