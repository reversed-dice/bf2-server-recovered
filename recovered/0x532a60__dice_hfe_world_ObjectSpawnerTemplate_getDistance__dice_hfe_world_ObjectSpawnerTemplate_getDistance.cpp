// FUNCTION: BF2 0x532a60
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    float getDistance() const;
};

float ObjectSpawnerTemplate::getDistance() const {
    return *(float*)((char*)this + 0x21c);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getDistance (0x532a60)