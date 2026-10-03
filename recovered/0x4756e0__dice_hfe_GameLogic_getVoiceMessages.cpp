// FUNCTION: BF2 0x4756e0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x358];
    void* field;
    void* getVoiceMessages() const;
};
void* GameLogic::getVoiceMessages() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getVoiceMessages (0x4756e0)
