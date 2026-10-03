// FUNCTION: BF2 0x60fdd0
namespace dice { namespace hfe { namespace world {

class GenericProjectileTemplate {
public:
    unsigned long long getWaterTracerTemplate() const;
};

unsigned long long GenericProjectileTemplate::getWaterTracerTemplate() const {
    return *(unsigned long long*)((char*)this + 0x258);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_getWaterTracerTemplate_const (0x60fdd0)