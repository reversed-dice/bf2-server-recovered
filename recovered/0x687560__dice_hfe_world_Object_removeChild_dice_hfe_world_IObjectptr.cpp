// FUNCTION: BF2 0x687560
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

extern void* responsePhysicsManager;

class Object {
public:
    void* m_vptr;
    unsigned int m_flags;
    char m_pad1[0x60 - 0xc];
    IObject* m_firstChild;
    void removeChild(IObject* child);
};

void Object::removeChild(IObject* child)
{
    if (child == 0)
        return;
    if (child->m_parent == 0)
        return;

    setResponseCacheToDirty(child);

    if (child->m_comp88 != 0)
        ((void (*)(void*, int))(*(void***)child->m_comp88)[0x60 / 8])(child->m_comp88, 0);

    if (m_firstChild == child) {
        m_firstChild = child->m_nextSibling;
        ((void (*)(void*, void*))(*(void***)child)[0x2c8 / 8])(child, 0);
        if (m_firstChild == 0)
            m_flags &= 0xff7fffff;
    } else if (m_firstChild != 0) {
        ((void (*)(void*, IObject*))(*(void***)m_firstChild)[0x2c0 / 8])(m_firstChild, child);
    }

    ((void (*)(void*, IObject*))(*(void***)responsePhysicsManager)[0x30 / 8])(responsePhysicsManager, child);

    if (child->m_comp88 != 0)
        ((void (*)(void*, int))(*(void***)child->m_comp88)[0x230 / 8])(child->m_comp88, 1);

    if (child->m_comp90 != 0)
        ((void (*)(void*))(*(void***)child->m_comp90)[0x40 / 8])(child->m_comp90);
}

} } }
