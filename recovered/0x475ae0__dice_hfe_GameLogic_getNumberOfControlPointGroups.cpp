// FUNCTION: BF2 0x475ae0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x168];
    void* field;
    void* getNumberOfControlPointGroups() const;
};
void* GameLogic::getNumberOfControlPointGroups() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getNumberOfControlPointGroups (0x475ae0)
