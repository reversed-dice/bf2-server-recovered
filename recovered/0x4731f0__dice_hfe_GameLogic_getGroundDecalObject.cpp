// FUNCTION: BF2 0x4731f0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x2f0];
    void* field;
    void* getGroundDecalObject() const;
};
void* GameLogic::getGroundDecalObject() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getGroundDecalObject (0x4731f0)
