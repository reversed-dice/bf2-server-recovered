// FUNCTION: BF2 0x497060
#include <list>
extern "C" unsigned int IID_INetworkableObject;
struct IObject;
struct RefCounted { char _pad[8]; IObject* obj; };
struct WeakRef { RefCounted* m_ref; };
struct Player {
    char _pad[0x1c0];
    std::list<WeakRef> m_list;
    void clearObjectList();
};
void Player::clearObjectList()
{
    for (std::list<WeakRef>::iterator it = m_list.begin(); it != m_list.end(); ++it) {
        RefCounted* r = it->m_ref;
        if (r != 0) {
            IObject* o = r->obj;
            if (o != 0) {
                void* q = ((void* (*)(void*))(*(void***)o)[0x1b0 / 8])(o);
                void* z = ((void* (*)(void*, unsigned int))(*(void***)q)[0x18 / 8])(q, IID_INetworkableObject);
                if (z != 0)
                    ((void (*)(void*, int))(*(void***)z)[0x20 / 8])(z, -1);
            }
        }
    }
    m_list.clear();
}
