// FUNCTION: BF2 0x532b40
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
    unsigned char _pad[0x22C];
    float m_radius;
public:
    void setRadius(float radius);
};

void ObjectSpawnerTemplate::setRadius(float radius) {
    m_radius = radius;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setRadius_float (0x532b40)