// FUNCTION: BF2 0x6100c0
namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    bool hasTracer() const;
};

bool GenericProjectile::hasTracer() const {
    return *(unsigned long*)(*(unsigned long*)((char*)this + 600) + 0x248) != 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_hasTracer_const (0x6100c0)