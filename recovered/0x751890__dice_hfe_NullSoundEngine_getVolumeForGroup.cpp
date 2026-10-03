// FUNCTION: BF2 0x751890
namespace dice { namespace hfe {
class NullSoundEngine {
public:
    float getVolumeForGroup() const;
};
float NullSoundEngine::getVolumeForGroup() const { return 0.0f; }
} }
// REVERSED_FUNCTION: dice_hfe_NullSoundEngine_getVolumeForGroup (0x751890)
