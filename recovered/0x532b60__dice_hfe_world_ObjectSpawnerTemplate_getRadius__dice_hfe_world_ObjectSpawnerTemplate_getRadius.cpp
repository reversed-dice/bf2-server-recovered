// FUNCTION: BF2 0x532b60
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    float getRadius() const;

private:
    unsigned char m_pad[0x22c];
    float m_radius;
};

float ObjectSpawnerTemplate::getRadius() const {
    return m_radius;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getRadius (0x532b60)