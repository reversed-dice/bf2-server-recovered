// FUNCTION: BF2 0x532be0
namespace dice { namespace hfe { namespace world {

class ObjectSpawnerTemplate {
public:
    float getUseButtonRadius() const; // offset 0x230
};

float ObjectSpawnerTemplate::getUseButtonRadius() const
{
    return *(float*)((unsigned char*)this + 0x230);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawnerTemplate_getUseButtonRadius (0x532be0)