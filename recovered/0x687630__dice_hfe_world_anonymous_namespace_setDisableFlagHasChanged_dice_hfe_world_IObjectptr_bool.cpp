// FUNCTION: BF2 0x687630
namespace dice { namespace hfe { namespace world {

class IObject {
public:
    void* m_pad0[0x50 / 8];
    IObject* m_parent;
    IObject* m_nextSibling;
    void* m_pad1[(0x88 - 0x60) / 8];
    void* m_comp88;
    void* m_comp90;
};

namespace { void setResponseCacheToDirty(IObject*); }

extern void setBoundRadiusIsDirty(IObject*);
extern void* physicsNodeManager;
extern void* responsePhysicsManager;
extern void* objectManager;

void setDisableFlagHasChanged(IObject* obj, bool v)
{
    if (((unsigned char*)obj)[0xb] & 1)
        ((void (*)(void*, IObject*))(*(void***)objectManager)[0x140 / 8])(objectManager, obj);

    setBoundRadiusIsDirty(obj);
    setResponseCacheToDirty(obj);

    IObject* p = *(IObject**)((char*)obj + 0x88);

    if (v) {
        if (p != 0)
            ((void (*)(void*, IObject*))(*(void***)physicsNodeManager)[0x40 / 8])(physicsNodeManager, p);
        ((void (*)(void*, IObject*))(*(void***)responsePhysicsManager)[0x38 / 8])(responsePhysicsManager, obj);
    } else {
        if (p != 0)
            ((void (*)(void*, IObject*))(*(void***)physicsNodeManager)[0x38 / 8])(physicsNodeManager, p);
        ((void (*)(void*, IObject*))(*(void***)responsePhysicsManager)[0x30 / 8])(responsePhysicsManager, obj);
    }
}

} } }
