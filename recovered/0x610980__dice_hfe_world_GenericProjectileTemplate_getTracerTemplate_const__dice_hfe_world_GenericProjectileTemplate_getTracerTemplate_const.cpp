// FUNCTION: BF2 0x610980
namespace dice { namespace hfe { namespace world {

class GenericProjectileTemplate {
public:
    void* getTracerTemplate() const;
};

void* GenericProjectileTemplate::getTracerTemplate() const {
    return *(void**)((char*)this + 0x248);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_getTracerTemplate_const (0x610980)