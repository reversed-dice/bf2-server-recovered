// FUNCTION: BF2 0x68a3f0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <map>

namespace dice { namespace hfe { namespace world {

class IObject;

typedef int (*Fn_58)(void*);
typedef void (*Fn_30)(void*);
typedef unsigned char (*Fn_78)(void*);
typedef void (*Fn_68)(void*, int);
typedef void* (*Fn_1b0)(void*);
typedef void* (*Fn_1e0)(void*);
typedef void (*Fn_210)(void*, void*);
typedef void (*Fn_230)(void*, void*);
typedef void (*Fn_28)(void*, int, int, void*, float);
typedef void (*Fn_1f0)(void*, void*);

extern void* mObjectManager;
extern void* eventManager;

extern "C" void findChildren_688040(void*, void*);
extern "C" void abort() __attribute__((noreturn));

class Object {
public:
    char _pad0[0x8];
    unsigned char m_8;
    char _pad1[0x50 - 0x9];
    void* m_50;
    char _pad2[0x1b0 - 0x58];
    std::map<int, IObject*> m_map;
    char _pad3[0x20d - 0x1b0 - 0x30];
    unsigned char m_20d;
    void destroy(bool param);
};

void Object::destroy(bool param)
{
    if (((Fn_58)(*(void***)this)[0x58 / 8])(this) != 0
        || (m_8 & 0x20) != 0) {
        abort();
    }
    if (m_20d == 0) {
        m_20d = 1;
        std::map<int, IObject*>::iterator e = m_map.end();
        for (std::map<int, IObject*>::iterator it = m_map.begin(); it != e; ++it) {
            IObject* p = it->second;
            if (p != 0) ((Fn_30)(*(void***)p)[0x30 / 8])(p);
        }
        ((Fn_210)(*(void***)mObjectManager)[0x210 / 8])(mObjectManager, this);
        void* r = ((Fn_1b0)(*(void***)this)[0x1b0 / 8])(this);
        if (r != 0) {
            ((Fn_28)(*(void***)eventManager)[0x28 / 8])(eventManager, 6, 0x11, this, 0.0f);
        }
        if (param) {
            void* p50 = m_50;
            if (p50 != 0) ((Fn_1f0)(*(void***)p50)[0x1f0 / 8])(p50, this);
            std::vector<IObject*> v;
            void* q = ((Fn_1e0)(*(void***)this)[0x1e0 / 8])(this);
            findChildren_688040(q, &v);
            for (std::vector<IObject*>::iterator it = v.begin(); it != v.end(); ++it) {
                IObject* c = *it;
                if (((Fn_78)(*(void***)c)[0x78 / 8])(c) == 0)
                    ((Fn_68)(*(void***)c)[0x68 / 8])(c, 0);
            }
            ((Fn_230)(*(void***)mObjectManager)[0x230 / 8])(mObjectManager, this);
        }
    }
}

}}}
