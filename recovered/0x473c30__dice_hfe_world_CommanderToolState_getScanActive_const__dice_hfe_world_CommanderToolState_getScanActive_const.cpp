// FUNCTION: BF2 0x473c30
namespace dice { namespace hfe { namespace world {

static const volatile float s_scanActiveThreshold = 0.0f;

class CommanderToolState {
public:
    bool getScanActive() const;

private:
    void* m_vtable;           // offset 0x00
    float m_scanActiveTime;   // offset 0x08
};

bool CommanderToolState::getScanActive() const {
    return m_scanActiveTime > s_scanActiveThreshold;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolState_getScanActive_const (0x473c30)