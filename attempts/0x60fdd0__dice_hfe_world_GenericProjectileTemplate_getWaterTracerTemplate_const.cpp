namespace dice { namespace hfe { namespace world {

class GenericProjectileTemplate {
public:
    void* getWaterTracerTemplate() const;
};

void* GenericProjectileTemplate::getWaterTracerTemplate() const {
    return *(void**)((char*)this + 0x258);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_getWaterTracerTemplate_const (0x60fdd0)
