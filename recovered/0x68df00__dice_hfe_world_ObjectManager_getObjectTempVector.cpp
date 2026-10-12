// FUNCTION: BF2 0x68df00
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {

class IObject;

class ObjectManager {
public:
    char _pad0[0x1f8];
    std::vector<IObject*> m_tempVector;
    std::vector<IObject*>& getObjectTempVector();
};

std::vector<IObject*>& ObjectManager::getObjectTempVector() {
    IObject* zero = 0;
    if (m_tempVector.size() > 0) {
        m_tempVector.erase(m_tempVector.begin(), m_tempVector.end());
    } else {
        m_tempVector.insert(m_tempVector.end(), (unsigned long)0, zero);
    }
    return m_tempVector;
}

} } }
