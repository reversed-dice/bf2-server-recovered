// FUNCTION: BF2 0x558120
namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

class SoldierTemplate {
public:
    char pad_0[0x220];
    void* pad_ptr;
    Vec3 m_poseCameraPositions[3];

    void poseCameraPosition(int pose, Vec3 const& pos);
};

void SoldierTemplate::poseCameraPosition(int pose, Vec3 const& pos) {
    Vec3& v = m_poseCameraPositions[pose];
    v.y = pos.y;
    v.x = 0.0f;
    v.z = 0.0f;
}

}
}
}
