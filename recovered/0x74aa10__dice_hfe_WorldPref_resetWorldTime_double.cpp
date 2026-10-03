// FUNCTION: BF2 0x74aa10
// WorldPref::resetWorldTime 0x74aa10 — store double global
namespace dice { namespace hfe {

void resetWorldTime(double t) {
    *(double*)0x10aa200 = t;
}

}}
