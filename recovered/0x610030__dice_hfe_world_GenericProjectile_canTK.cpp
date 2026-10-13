// FUNCTION: BF2 0x610030
extern "C" double WorldPref_getWorldTime_74aa00();

namespace dice { namespace hfe { namespace world {

class GenericProjectile {
public:
    bool canTK();
};

}}}

namespace dice { namespace hfe { namespace world {

bool GenericProjectile::canTK() {
    float v = *(float*)(*(char**)((char*)this + 0x258) + 0x238);
    if (v != -1.0f) {
        double t = WorldPref_getWorldTime_74aa00();
        if (v > t - (double)*(float*)((char*)this + 0x2d4))
            return true;
        return false;
    }
    return true;
}

}}}
