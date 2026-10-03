// FUNCTION: BF2 0x5210d0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    void* getActiveAnimationSystem() const;

private:
    char pad_0x0000[0x410];
    void* m_activeAnimationSystem;
};

void* PlayerControlObject::getActiveAnimationSystem() const {
    return m_activeAnimationSystem;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getActiveAnimationSystem (0x5210d0)