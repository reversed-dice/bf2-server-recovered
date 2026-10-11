// FUNCTION: BF2 0x7ebd50
// BF2_COMPILER: gcc34
// BF2_FLAGS: -fno-if-conversion
#include <map>

namespace dice { namespace hfe { namespace io {

struct AxisRemap;

struct ControlMap {
    char pad_00[0x20];
    std::map<int, AxisRemap*> m_axisRemap; // 0x20
    
    float getAxisValue(int axis) const;
};

float ControlMap::getAxisValue(int axis) const {
    std::map<int, AxisRemap*>::const_iterator it = m_axisRemap.find(axis);
    if (it != m_axisRemap.end()) {
        float f;
        *(int*)&f = *(int*)((char*)it->second + 0xb4);
        return f;
    }
    float f;
    *(int*)&f = 0 * axis;
    return f;
}

} } }
