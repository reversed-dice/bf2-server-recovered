// FUNCTION: BF2 0x68d510
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe {
template <class T> struct WeakPtrHandle { void release() { if (--refs == 0) delete this; } int refs; T* obj; };
template <class T> class WeakPtr {
public:
    WeakPtr() : m_h(0) {}
    WeakPtr(const WeakPtr& o) : m_h(o.m_h) { if (m_h) ++m_h->refs; }
    WeakPtr& operator=(const WeakPtr& o) { if (o.m_h) ++o.m_h->refs; if (m_h) m_h->release(); m_h = o.m_h; return *this; }
    ~WeakPtr() { if (m_h) m_h->release(); }
    bool operator<(const WeakPtr& o) const { return m_h < o.m_h; }
    bool operator==(const WeakPtr& o) const { return m_h == o.m_h; }
    WeakPtrHandle<T>* m_h;
};
namespace world { class IObject; }
} }

template class std::vector<dice::hfe::WeakPtr<dice::hfe::world::IObject> >;

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
    virtual dice::hfe::WeakPtr<IObject> getWeakPtr();
    char _pad0[0xe9];
    unsigned char m_0xf1;
};

class ObjectManager {
public:
    char _pad0[0x138];
    std::vector<dice::hfe::WeakPtr<IObject> > m_objects;
    void refreshGridObject(IObject* obj);
};

void ObjectManager::refreshGridObject(IObject* obj)
{
    if (obj->m_0xf1 == 0) {
        obj->m_0xf1 = 1;
        m_objects.push_back(obj->getWeakPtr());
    }
}

} } }
