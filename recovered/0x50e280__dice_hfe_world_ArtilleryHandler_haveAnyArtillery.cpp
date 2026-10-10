// FUNCTION: BF2 0x50e280
#include <list>

namespace dice { namespace hfe { namespace world {

class Inner {
public:
    char m_pad0[0x78];
    void* m_78;   // +0x78
};

class Element {
public:
    char m_pad0[0x250];
    Inner* m_250;   // +0x250
};

class ArtilleryHandler {
public:
    bool haveAnyArtillery();

    char m_pad0[8];
    std::list<Element*> m_elements;   // +0x08
};

bool ArtilleryHandler::haveAnyArtillery()
{
    int n = 0;
    for (std::list<Element*>::iterator it = m_elements.begin(); it != m_elements.end(); ++it) {
        Element* e = *it;
        if (e && e->m_250 && e->m_250->m_78) {
            typedef bool (*fn_t)(void*);
            void* p = e->m_250->m_78;
            if (!(*(fn_t*)((char*)*(void**)p + 0xa8))(p)) n++;
        }
    }
    return n > 0;
}

} } }
