// FUNCTION: BF2 0x610980
namespace dice { namespace hfe { namespace world {

class TracerTemplate;

class GenericProjectileTemplate {
public:
    TracerTemplate* getTracerTemplate() const;

private:
    char __pad_0x000[0x248];
    TracerTemplate* m_tracerTemplate;  // offset 0x248
};

TracerTemplate* GenericProjectileTemplate::getTracerTemplate() const {
    return m_tracerTemplate;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectileTemplate_getTracerTemplate_const (0x610980)
