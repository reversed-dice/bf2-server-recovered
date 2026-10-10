// FUNCTION: BF2 0x5be450
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject;

class StrategicObjectHolder {
public:
    std::vector<IObject*> m_objects;
    int m_count;

    void removeObject(IObject* obj);
};

void StrategicObjectHolder::removeObject(IObject* obj) {
    for (unsigned int i = 0; i < m_objects.size(); ++i) {
        if (m_objects[i] == obj) {
            m_objects[i] = 0;
            --m_count;
            return;
        }
    }
}

} } }
