// FUNCTION: BF2 0x60bab0
namespace dice { namespace hfe { namespace world {

class ThrownAnimationCompTemplate {
public:
    int getRef();

private:
    /* 0x00 */ void* vtable;
    /* 0x08 */ char _pad[0x0C];
    /* 0x14 */ int m_refCount;
};

int ThrownAnimationCompTemplate::getRef() {
    return m_refCount;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownAnimationCompTemplate_getRef (0x60bab0)