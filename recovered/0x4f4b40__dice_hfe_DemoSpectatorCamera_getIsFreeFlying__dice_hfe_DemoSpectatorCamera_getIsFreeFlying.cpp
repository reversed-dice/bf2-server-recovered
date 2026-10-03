// FUNCTION: BF2 0x4f4b40
namespace dice { namespace hfe {

class DemoSpectatorCamera {
public:
    bool getIsFreeFlying() const;
private:
    char __pad[0x20];
    int m_field;
};

bool DemoSpectatorCamera::getIsFreeFlying() const
{
    return m_field == 0;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera_getIsFreeFlying (0x4f4b40)