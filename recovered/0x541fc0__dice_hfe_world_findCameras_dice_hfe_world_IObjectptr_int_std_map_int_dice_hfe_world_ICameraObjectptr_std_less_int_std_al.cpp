// FUNCTION: BF2 0x541fc0
// BF2_FLAGS: -fno-strict-aliasing
#include <list>
#include <map>
#include <utility>

namespace dice { namespace hfe { namespace world {

class ICameraObject;

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
typedef int (*IdFn)(void*);
typedef void (*SetIdFn)(void*, int);
typedef void* (*ChildFn)(void*);

typedef std::map<int, ICameraObject*> CamMap;

extern "C" int IID_ICameraObject;

void findCameras(IObject* obj, int id, CamMap& m)
{
    if (obj == 0) return;

    std::list<IObject*> list;
    list.push_back(obj);

    ICameraObject* cam = (ICameraObject*)((QiFn)(*(void***)obj)[0x18 / 8])(obj, IID_ICameraObject);
    int next = -1;
    if (cam != 0 && ((IdFn)(*(void***)cam)[0x90 / 8])(cam) == id) {
        if (((IdFn)(*(void***)cam)[0x58 / 8])(cam) == 0) {
            ((SetIdFn)(*(void***)cam)[0x50 / 8])(cam, -1);
            m.insert(std::make_pair(-1, cam));
            next = -2;
        } else {
            next = -1;
            m.insert(std::make_pair(((IdFn)(*(void***)cam)[0x58 / 8])(cam), cam));
        }
    }

    while (list.size() > 0) {
        IObject* cur = list.front();
        IObject* o = (IObject*)((ChildFn)(*(void***)cur)[0x1e0 / 8])(cur);
        list.pop_front();

        while (o != 0) {
            ICameraObject* c = (ICameraObject*)((QiFn)(*(void***)o)[0x18 / 8])(o, IID_ICameraObject);
            if (c != 0 && ((IdFn)(*(void***)c)[0x90 / 8])(c) == id) {
                if (((IdFn)(*(void***)c)[0x58 / 8])(c) == 0) {
                    ((SetIdFn)(*(void***)c)[0x50 / 8])(c, next);
                    m.insert(std::make_pair(next, c));
                    --next;
                } else {
                    m.insert(std::make_pair(((IdFn)(*(void***)c)[0x58 / 8])(c), c));
                }
            }
            list.push_back(o);
            o = ((ObjLink*)o)->m_next;
        }
    }
}

} } }
