// FUNCTION: BF2 0x598150
namespace dice { namespace hfe { namespace world {

class EffectObject {
public:
    virtual ~EffectObject() {}
};

class EffectBundle : public EffectObject {
public:
    EffectObject* getObject() const;
};

EffectObject* EffectBundle::getObject() const {
    return (EffectObject*)this;
}

} } } // namespace
// REVERSED_FUNCTION: dice_hfe_world_EffectBundle_getObject_const (0x598150)