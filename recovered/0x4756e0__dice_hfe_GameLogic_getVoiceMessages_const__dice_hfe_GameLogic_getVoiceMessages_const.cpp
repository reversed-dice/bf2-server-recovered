// FUNCTION: BF2 0x4756e0
namespace dice { namespace hfe {

struct VoiceMessages;

class GameLogic {
    unsigned char _pad_0x000[0x358];
    VoiceMessages* m_voiceMessages;   // offset 0x358
public:
    VoiceMessages* getVoiceMessages() const;
};

VoiceMessages* GameLogic::getVoiceMessages() const {
    return m_voiceMessages;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getVoiceMessages_const (0x4756e0)