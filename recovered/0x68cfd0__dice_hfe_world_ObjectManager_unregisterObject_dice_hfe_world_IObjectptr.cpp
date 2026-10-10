// FUNCTION: BF2 0x68cfd0
#include <map>
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    // 0x0 - 0x1f: unknown base
    char m_pad0[0x20];
    unsigned int m_hash;
    unsigned int getHash() const { return m_hash; }
};

class ObjectManager {
public:
    void removeObjectFromCuller(IObject* obj);
    void unregisterObject(IObject* obj);

private:
    char m_pad0[0x88];
    std::map<unsigned int, IObject*> m_88;
    char m_pad1[0xb8 - 0x88 - 0x30];
    std::map<unsigned int, IObject*> m_b8;
    char m_pad2[0x158 - 0xb8 - 0x30];
    std::map<unsigned int, IObject*> m_158;
};

void ObjectManager::unregisterObject(IObject* obj) {
    removeObjectFromCuller(obj);
    m_b8.erase(obj->getHash());
    m_158.erase(obj->getHash());
    m_88.erase(obj->getHash());
}

} } }
