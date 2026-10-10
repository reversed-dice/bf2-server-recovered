// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x68e170
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
    void removeObjectFromUpdate(IObject* obj);

private:
    char m_pad0[0x60];
    bool m_60;
    char m_pad1[0x68 - 0x61];
    std::vector<IObject*> m_68;
    char m_pad2[0x88 - 0x80];
    std::map<unsigned int, IObject*> m_88;
};

void ObjectManager::removeObjectFromUpdate(IObject* obj) {
    if (m_60)
        m_68.push_back(obj);
    else
        m_88.erase(obj->getHash());
}

} } }
