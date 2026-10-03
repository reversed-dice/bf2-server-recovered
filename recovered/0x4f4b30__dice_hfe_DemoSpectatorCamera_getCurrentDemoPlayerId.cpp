// FUNCTION: BF2 0x4f4b30
namespace dice { namespace hfe {
class DemoSpectatorCamera {
public:
    char _pad[0x10];
    int field;
    int getCurrentDemoPlayerId() const;
};
int DemoSpectatorCamera::getCurrentDemoPlayerId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera_getCurrentDemoPlayerId (0x4f4b30)
