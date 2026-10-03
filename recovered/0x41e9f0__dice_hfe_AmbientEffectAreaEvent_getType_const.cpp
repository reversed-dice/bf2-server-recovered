// FUNCTION: BF2 0x41e9f0
namespace dice { namespace hfe {

struct AmbientEffectAreaEvent {
    int getType() const;
};

int AmbientEffectAreaEvent::getType() const
{
    return 0x22;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_AmbientEffectAreaEvent_getType_const (0x41e9f0)
