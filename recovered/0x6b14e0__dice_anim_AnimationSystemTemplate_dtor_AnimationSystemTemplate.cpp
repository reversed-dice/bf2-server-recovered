// FUNCTION: BF2 0x6b14e0
namespace dice { namespace anim {

struct TriggerManager { ~TriggerManager(); };   // dtor 0x006d03a0
struct BundleManager  { ~BundleManager(); };    // dtor 0x006b7090
struct StateTable     { int _v; };              // trivially destructible

// Declared, not defined: the target tail-calls this dtor (0x006b1360).
struct AnimationSystemTemplateBase {
    virtual ~AnimationSystemTemplateBase();
};

class AnimationSystemTemplate : public AnimationSystemTemplateBase {
public:
    TriggerManager* m_triggers;   // 0x08
    BundleManager*  m_bundles;    // 0x10
    StateTable*     m_states;     // 0x18
    virtual ~AnimationSystemTemplate();
};

AnimationSystemTemplate::~AnimationSystemTemplate()
{
    delete m_triggers;
    delete m_bundles;
    delete m_states;
}

} }
// REVERSED_FUNCTION: dice_anim_AnimationSystemTemplate_dtor_AnimationSystemTemplate (0x6b14e0)
