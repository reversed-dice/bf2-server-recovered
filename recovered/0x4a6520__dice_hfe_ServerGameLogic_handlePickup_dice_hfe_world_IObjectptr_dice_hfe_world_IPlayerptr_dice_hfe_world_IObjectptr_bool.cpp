// FUNCTION: BF2 0x4a6520
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

extern "C" void* fn_407508(unsigned long);
extern "C" void dice_hfe_GameEvent_GameEvent(void* obj);

typedef int    (*FnI)(void*);
typedef void   (*FnGameEv)(void*, void*);

namespace world {

class IObject;

class IPlayer {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20)
#undef V
    virtual int getTeam();
};

class Networkable {
public:
    char _pad[0x8];
    unsigned short m_id;
};

class IObject {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2)
#undef V
    virtual void* queryInterface(unsigned int iid);
#define V(n) virtual void _v##n();
    V(4) V(5) V(6) V(7) V(8) V(9)
    V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29)
    V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38) V(39)
    V(40) V(41) V(42) V(43) V(44) V(45) V(46) V(47) V(48) V(49)
    V(50) V(51) V(52) V(53)
#undef V
    virtual Networkable* getNetworkable(); // slot 54 = 0x1b0

    unsigned char m_flags;
    char _pad0[0x1f];
    void* m_template;                      // +0x28
};

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual unsigned int getClassId();
};

extern unsigned int IID_IItemContainerObject;

} // namespace world

class IItemContainerObject {
public:
    virtual void _pad0() = 0;
    virtual void _pad1() = 0;
    virtual void _pad2() = 0;
    virtual void _pad3() = 0;
    virtual void _pad4() = 0;
    virtual void _pad5() = 0;
    virtual void _pad6() = 0;
    virtual void _pad7() = 0;
    virtual void _pad8() = 0;
    virtual void drop(world::IPlayer* player, world::IObject* obj) = 0;
};

class ServerGameLogic {
public:
    void handlePickup(world::IObject* obj, world::IPlayer* player, world::IObject* containerObj, bool b);
};

struct _typeobject;
struct _object {
    int ob_refcnt;
    _typeobject* ob_type;
};
struct _typeobject {
    char m_pad0[0x28];
    void (*tp_dealloc)(_object*);
};

namespace python {

class PyRef {
public:
    ~PyRef() {
        if (m_obj) {
            if (--m_obj->ob_refcnt == 0)
                m_obj->ob_type->tp_dealloc(m_obj);
        }
    }
    _object* get() const { return m_obj; }
    _object* m_obj;
};

template <class A, class B> PyRef buildArgs(const A& a, const B& b);

class PythonHost {
public:
    void handleEvent(int ev, _object* args);
};

}

python::PythonHost* pythonHost();

void ServerGameLogic::handlePickup(world::IObject* obj, world::IPlayer* player, world::IObject* containerObj, bool b)
{
    IItemContainerObject* container = 0;
    if (containerObj != 0) {
        container = reinterpret_cast<IItemContainerObject*>(containerObj->queryInterface(world::IID_IItemContainerObject));
    }
    container->drop(player, obj);

    typedef void (*FnGameEv2)(void*, void*);
    FnGameEv2 fe = (FnGameEv2)(*(void***)*(void**)0x010c5420)[0x108 / 8];
    int team = player->getTeam();
    unsigned short id1 = obj->getNetworkable()->m_id;
    unsigned short id2 = containerObj->getNetworkable()->m_id;

    struct HandlePickupEvent {
        void* vptr;
        char _pad0[0x8];
        unsigned char m_10;
        unsigned short m_12;
        unsigned short m_14;
    };
    HandlePickupEvent* ev = (HandlePickupEvent*)fn_407508(0x18);
    dice_hfe_GameEvent_GameEvent(ev);
    ev->vptr = (void*)0xb2cdf0;
    ev->m_10 = (unsigned char)team;
    ev->m_12 = id1;
    ev->m_14 = id2;
    fe(*(void**)0x010c5420, ev);

    extern int CID_KitTemplate;
    if (((world::IObjectTemplate*)obj->m_template)->getClassId() == (unsigned int)CID_KitTemplate) {
        python::PyRef args = python::buildArgs(player, obj);
        pythonHost()->handleEvent(4, args.get());
    }
}

} }
