// FUNCTION: BF2 0x5774e0
namespace dice { namespace hfe { namespace world {

class Vehicle {
public:
    /* 0x00 */ void* vtable;
    /* 0x08 */ unsigned char ___pad_vehicle[0x37C];
    /* 0x384 */ float m_insideDamageFrequency;
};

class Camera {
public:
    /* 0x00 */ void* vtable;
    /* 0x08 */ unsigned char ___pad_camera[0x20];
    /* 0x28 */ Vehicle* m_vehicle;

    float getInsideDamageFrequency() const;
};

} } }

float dice::hfe::world::Camera::getInsideDamageFrequency() const
{
    return m_vehicle->m_insideDamageFrequency;
}
// REVERSED_FUNCTION: dice_hfe_world_Camera_getInsideDamageFrequency_const (0x5774e0)