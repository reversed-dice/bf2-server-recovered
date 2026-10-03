// FUNCTION: BF2 0x8be470
namespace dice { namespace hfe {
extern void fn_407628(void* a, const char* b);
void* operator__0x8be470(void* os, int shake) {
    switch (shake) {
    case 0: fn_407628(os, "CstExplosion"); break;
    case 1: fn_407628(os, "CstMachinegun"); break;
    case 2: fn_407628(os, "CstHitShake"); break;
    case 3: fn_407628(os, "CstDieShake"); break;
    case -1: fn_407628(os, "CstNoShake"); break;
    default: break;
    }
    return os;
}
} }
