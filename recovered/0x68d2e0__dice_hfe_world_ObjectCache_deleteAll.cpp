// FUNCTION: BF2 0x68d2e0
#include <map>

namespace dice { namespace hfe { namespace world {

struct IObject {
    virtual ~IObject();
#define PAD(n) virtual void v_##n();
    PAD(1) PAD(2) PAD(3) PAD(4) PAD(5) PAD(6) PAD(7) PAD(8) PAD(9) PAD(10)
    virtual void slot_60(int a);
    PAD(13)
    virtual void slot_70();
    PAD(15) PAD(16)
};

class ObjectCache
{
public:
    void unmarkObjectAsCached(IObject* obj);
    void deleteAll();

    std::map<unsigned int, std::map<unsigned int, IObject*> > m_0;   // 0x0
    int m_30;                                                       // 0x30
};

void ObjectCache::deleteAll()
{
    while (m_0.size() != 0) {
        std::map<unsigned int, std::map<unsigned int, IObject*> >::iterator it = m_0.begin();
        std::map<unsigned int, IObject*>& inner = it->second;
        while (inner.size() != 0) {
            IObject* obj = inner.begin()->second;
            inner.erase(inner.begin());
            unmarkObjectAsCached(obj);
            obj->slot_70();
        }
        m_0.erase(it);
    }
    m_30 = 0;
}

} } }
