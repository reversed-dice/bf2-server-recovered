// FUNCTION: BF2 0x475ae0
namespace dice { namespace hfe {

struct GameLogic {
    unsigned long long getNumberOfControlPointGroups() const;
};

unsigned long long GameLogic::getNumberOfControlPointGroups() const {
    return *(unsigned long long*)((char*)this + 0x168);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getNumberOfControlPointGroups (0x475ae0)