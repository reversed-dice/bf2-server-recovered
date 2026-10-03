// FUNCTION: BF2 0x4c03f0
namespace dice { namespace hfe {

class SquadManager {
    char _pad[0x40];
public:
    float getFirstCommanderSelectDelay() const;
};

float SquadManager::getFirstCommanderSelectDelay() const {
    return *(float*)((char*)this + 0x40);
}

} }
// REVERSED_FUNCTION: dice_hfe_SquadManager_getFirstCommanderSelectDelay_const (0x4c03f0)