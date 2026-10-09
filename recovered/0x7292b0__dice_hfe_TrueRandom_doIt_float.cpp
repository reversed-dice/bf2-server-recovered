// FUNCTION: BF2 0x7292b0
namespace dice { namespace hfe {
extern "C" float dice_hfe_TrueRandom_random();
class TrueRandom {
public:
    bool doIt(float v);
};
bool TrueRandom::doIt(float v)
{
    if (v <= 1e-5f) {
        return false;
    }
    return v >= dice_hfe_TrueRandom_random();
}
} }
