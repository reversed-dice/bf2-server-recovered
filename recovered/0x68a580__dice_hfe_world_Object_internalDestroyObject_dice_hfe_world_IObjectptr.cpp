// FUNCTION: BF2 0x68a580
#include <cstdlib>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03(); virtual void v04();
    virtual void v05(); virtual void v06(); virtual void v07(); virtual void v08(); virtual void v09();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void message(int, int);         // +0xc0
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
    virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual IObject* getFirstChild();       // +0x1e0
    virtual void v61();
    virtual void detach(IObject*);          // +0x1f0
};

class Object {
public:
    static void internalDestroyObject(IObject* object);
};

void Object::internalDestroyObject(IObject* object) {
    IObject* handler = *(IObject**)((char*)object + 0x50);
    if (handler != 0) {
        handler->detach(object);
    }

    while (object->getFirstChild() != 0) {
        internalDestroyObject(object->getFirstChild());
    }

    if (((*(unsigned char*)((char*)object + 9)) & 2) == 0) {
        abort();
    }

    object->message(1, 0x17e18);
    object->v02();
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Object_internalDestroyObject_dice_hfe_world_IObjectptr (0x68a580)
