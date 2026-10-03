// FUNCTION: BF2 0x532a40
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setDistance(float);

private:
    unsigned char __pad_0x000[0x21c];
    float m_distance;  // offset 0x21c
};

void ObjectSpawnerTemplate::setDistance(float d) {
    m_distance = d;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setDistance_float (0x532a40)