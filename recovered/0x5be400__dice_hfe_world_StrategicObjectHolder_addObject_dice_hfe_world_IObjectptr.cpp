// FUNCTION: BF2 0x5be400
// Target: 0x5be400
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject {};

class StrategicObjectHolder {
public:
    std::vector<IObject*> m_objects;
    int m_count;

    void addObject(IObject* obj);
};

void StrategicObjectHolder::addObject(IObject* obj) {
    m_objects.push_back(obj);
    m_count++;
}

} } }
