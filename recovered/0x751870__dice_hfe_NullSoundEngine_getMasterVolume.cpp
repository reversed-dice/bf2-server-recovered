// FUNCTION: BF2 0x751870
namespace dice { namespace hfe {
class NullSoundEngine {
public:
    float getMasterVolume() const;
};
float NullSoundEngine::getMasterVolume() const { return 0.0f; }
} }
// REVERSED_FUNCTION: dice_hfe_NullSoundEngine_getMasterVolume (0x751870)
