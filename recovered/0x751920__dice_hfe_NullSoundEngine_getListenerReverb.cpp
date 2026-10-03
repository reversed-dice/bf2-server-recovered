// FUNCTION: BF2 0x751920
namespace dice { namespace hfe {
class NullSoundEngine {
public:
    float getListenerReverb() const;
};
float NullSoundEngine::getListenerReverb() const { return 0.0f; }
} }
// REVERSED_FUNCTION: dice_hfe_NullSoundEngine_getListenerReverb (0x751920)
