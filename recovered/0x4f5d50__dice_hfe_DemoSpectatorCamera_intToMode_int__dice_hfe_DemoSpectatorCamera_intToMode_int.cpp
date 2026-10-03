// FUNCTION: BF2 0x4f5d50
namespace dice { namespace hfe {

class DemoSpectatorCamera {
public:
    static bool intToMode(unsigned int mode);
};

bool DemoSpectatorCamera::intToMode(unsigned int mode) {
    return mode == 1;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_DemoSpectatorCamera_intToMode_int (0x4f5d50)