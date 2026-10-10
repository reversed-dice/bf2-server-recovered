// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x68e0f0
#include <map>
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject {
public:
    char m_pad0[0x20];
    unsigned int m_hash;
    unsigned int getHash() const { return m_hash; }
};

class ObjectManager {
public:
    void removeObjectFromFrameUpdate(IObject* obj);

private:
    char m_pad0[0xb8];
    std::map<unsigned int, IObject*> m_b8;
    char m_pad1[0x100 - 0xb8 - 0x30];
    bool m_100;
    char m_pad2[0x120 - 0x101];
    std::vector<IObject*> m_120;
};

void ObjectManager::removeObjectFromFrameUpdate(IObject* obj) {
    if (m_100)
        m_120.push_back(obj);
    else
        m_b8.erase(obj->getHash());
}

} } }
