// FUNCTION: BF2 0x68d210
#include <map>

namespace dice { namespace hfe { namespace world {

class IObject;

class ObjectManager
{
public:
    void removeObjectFromCuller(IObject* obj);
    void unregisterObject(IObject* obj);
    std::map<unsigned int, IObject*>& getAllObjectsFromGrid();

    char m_pad0[0x88];
    std::map<unsigned int, IObject*> m_88;      // 0x88
    std::map<unsigned int, IObject*> m_b8;      // 0xb8
    char m_pad2[0x70];
    std::map<unsigned int, IObject*> m_158;     // 0x158
    char m_pad3[0x88];
    std::map<unsigned int, IObject*> m_210;     // 0x210
};

std::map<unsigned int, IObject*>& ObjectManager::getAllObjectsFromGrid()
{
    m_210.clear();

    for (std::map<unsigned int, IObject*>::iterator it = m_158.begin(); it != m_158.end(); ++it) {
        IObject* obj = it->second;
        if (*(void**)((char*)obj + 0x50) != 0)
            continue;
        if ((*(unsigned char*)((char*)obj + 0x9) & 4) == 0)
            continue;
        std::pair<unsigned int const, IObject*> p(*(unsigned int*)((char*)obj + 0x20), obj);
        m_210.insert(p);
    }

    return m_210;
}

} } }
