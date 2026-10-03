// FUNCTION: BF2 0x58b540
namespace dice { namespace hfe { namespace world {

class SimpleObjectTemplate {
public:
    float getTreeCollisionDiameter() const;
};

float SimpleObjectTemplate::getTreeCollisionDiameter() const
{
    return *(float*)((unsigned char*)this + 0xe0);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleObjectTemplate_getTreeCollisionDiameter_const (0x58b540)