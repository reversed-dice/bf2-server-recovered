// FUNCTION: BF2 0x505bb0
namespace dice { namespace hfe { namespace world {

class AmbientEffectArea {
public:
    bool isNetworked() const;
};

bool AmbientEffectArea::isNetworked() const {
    return *reinterpret_cast<const int*>(
        *reinterpret_cast<const char* const*>(
            reinterpret_cast<const char*>(this) + 0x240
        ) + 0x204
    ) > 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmbientEffectArea_isNetworked_const (0x505bb0)