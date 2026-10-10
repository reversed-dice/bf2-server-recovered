// FUNCTION: BF2 0x62fb50
namespace dice { namespace hfe { namespace world {

class EngineBase {
public:
    static float s_gearRatio[8];
    float getGearRatio(int gear) const;
};

float EngineBase::getGearRatio(int gear) const
{
    int idx;
    if (gear > 0)
        idx = (gear < 6) ? (gear - 1) : 4;
    else
        idx = 0;
    return s_gearRatio[idx];
}

}}}
