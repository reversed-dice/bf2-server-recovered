// FUNCTION: BF2 0x79a920
namespace dice { namespace hfe {
extern void fn_407628(void* a, const char* b);
void* operator__0x79a920(void* os, int pose) {
    switch (pose) {
    case 0: fn_407628(os, "SPNotAvailable"); break;
    case 1: fn_407628(os, "SPStanding"); break;
    case 2: fn_407628(os, "SPCrouching"); break;
    case 3: fn_407628(os, "SPLying"); break;
    case 4: fn_407628(os, "SPSwimming"); break;
    default: break;
    }
    return os;
}
} }
