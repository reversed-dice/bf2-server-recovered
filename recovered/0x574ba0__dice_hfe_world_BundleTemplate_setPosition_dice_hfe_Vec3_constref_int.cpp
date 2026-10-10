// FUNCTION: BF2 0x574ba0
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

struct BundleEntry {
    char _pad[0x4c];
    dice::hfe::Vec3 m_pos; // +0x4c
};

class BundleTemplate {
public:
    char _pad[0x1d8];
    std::vector<BundleEntry*> m_entries; // +0x1d8

    void setPosition(const dice::hfe::Vec3& pos, int index);
};

void BundleTemplate::setPosition(const dice::hfe::Vec3& pos, int index) {
    if (index >= 0 && index < (int)m_entries.size()) {
        m_entries[index]->m_pos = pos;
    }
}

} } }
