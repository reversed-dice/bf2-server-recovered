// FUNCTION: BF2 0x532a20
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    float getTimeToLive() const;

private:
    unsigned char _pad[0x218];
    float m_timeToLive;
};

float ObjectSpawnerTemplate::getTimeToLive() const {
    return m_timeToLive;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getTimeToLive (0x532a20)