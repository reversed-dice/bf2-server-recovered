// FUNCTION: BF2 0x4c0410
namespace dice { namespace hfe {
class SquadManager {
public:
    float getCommanderSelectDelay() const;
};
float SquadManager::getCommanderSelectDelay() const {
    return *(float*)((char*)this + 0x44);
}
} }
// REVERSED_FUNCTION: dice_hfe_SquadManager_getCommanderSelectDelay_const (0x4c0410)