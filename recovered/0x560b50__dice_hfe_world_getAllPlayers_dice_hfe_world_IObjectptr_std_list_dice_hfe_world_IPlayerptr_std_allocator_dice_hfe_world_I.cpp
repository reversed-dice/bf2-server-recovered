// FUNCTION: BF2 0x560b50
#include <list>

namespace dice { namespace hfe { namespace world {

extern const unsigned int IID_IPlayerControlObject;

void getAllPlayers(void* obj, std::list<void*>& out);

void getAllPlayers(void* obj, std::list<void*>& out)
{
    void* q = ((void* (*)(void*, unsigned int))(*(void***)obj)[0x18 / 8])(obj, IID_IPlayerControlObject);
    if (q != 0) {
        void* p = ((void* (*)(void*))(*(void***)q)[0x20 / 8])(q);
        if (p != 0) {
            if (((bool (*)(void*))(*(void***)p)[0xd8 / 8])(p))
                out.push_back(p);
        }
    }
    for (void* c = ((void* (*)(void*))(*(void***)obj)[0x1e0 / 8])(obj); c != 0; c = *(void**)((char*)c + 0x58))
        getAllPlayers(c, out);
}

} } }
