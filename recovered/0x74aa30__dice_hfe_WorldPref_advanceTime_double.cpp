// FUNCTION: BF2 0x74aa30
namespace dice { namespace hfe {

class WorldPref {
public:
    static double mWorldTime;
    static double mFrameTime;
    static void advanceTime(double dt);
};

void WorldPref::advanceTime(double dt)
{
    if (!(dt < 0.0)) {
        mFrameTime = dt;
        mWorldTime += dt;
    }
}

} }
