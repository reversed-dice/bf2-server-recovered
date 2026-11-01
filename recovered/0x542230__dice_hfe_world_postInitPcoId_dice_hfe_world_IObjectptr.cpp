// FUNCTION: BF2 0x542230
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <utility>

namespace dice { namespace hfe { namespace world {

class IPlayerControlObject;

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
};

struct ObjLink {
    unsigned char m_pad[0x58];
    IObject* m_next;
};

typedef void* (*QiFn)(void*, unsigned int);
typedef int (*GetIdFn)(void*);
typedef void (*SetIdFn)(void*, int);
typedef IObject* (*ChildFn)(void*);

typedef std::map<int, IPlayerControlObject*> PcoMap;

extern "C" int IID_IPlayerControlObject;

void postInitPcoId(IObject* obj)
{
    if (obj == 0) return;

    std::list<IObject*> list;
    list.push_back(obj);

    std::list<IPlayerControlObject*> pending;
    PcoMap ids;

    IPlayerControlObject* p = (IPlayerControlObject*)((QiFn)(*(void***)obj)[0x18 / 8])(obj, IID_IPlayerControlObject);
    if (p != 0) {
        if (((GetIdFn)(*(void***)p)[0x60 / 8])(p) == -1) {
            pending.push_back(p);
        } else {
            ids.insert(std::make_pair(((GetIdFn)(*(void***)p)[0x60 / 8])(p), p));
        }
    }

    while (list.size() > 0) {
        IObject* cur = list.front();
        IObject* o = (IObject*)((ChildFn)(*(void***)cur)[0x1e0 / 8])(cur);
        list.pop_front();

        while (o != 0) {
            IPlayerControlObject* c = (IPlayerControlObject*)((QiFn)(*(void***)o)[0x18 / 8])(o, IID_IPlayerControlObject);
            if (c != 0) {
                if (((GetIdFn)(*(void***)c)[0x60 / 8])(c) == -1) {
                    pending.push_back(c);
                } else {
                    ids.insert(std::make_pair(((GetIdFn)(*(void***)c)[0x60 / 8])(c), c));
                }
            }
            list.push_back(o);
            o = ((ObjLink*)o)->m_next;
        }
    }

    if (pending.size() > 0) {
        int id = 0;
        while (pending.size() > 0) {
            if (ids.find(id) == ids.end()) {
                IPlayerControlObject* q = pending.front();
                pending.pop_front();
                ((SetIdFn)(*(void***)q)[0x68 / 8])(q, id);
                ids.insert(std::make_pair(((GetIdFn)(*(void***)q)[0x60 / 8])(q), q));
            }
            ++id;
        }
    }
}

} } }
