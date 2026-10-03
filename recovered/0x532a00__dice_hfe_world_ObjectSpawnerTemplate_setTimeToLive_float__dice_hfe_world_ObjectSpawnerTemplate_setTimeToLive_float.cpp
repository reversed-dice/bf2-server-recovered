// FUNCTION: BF2 0x532a00
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    void setTimeToLive(float timeToLive);

private:
    char m_pad0[0x218];
    float m_timeToLive;             // offset 0x218
};

void ObjectSpawnerTemplate::setTimeToLive(float timeToLive) {
    m_timeToLive = timeToLive;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_setTimeToLive_float (0x532a00)