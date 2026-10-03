// FUNCTION: BF2 0x8bc9a0
namespace dice { namespace hfe {
extern void fn_407628(void* a, const char* b);
void* operator__0x8bc9a0(void* os, int cat) {
    switch (cat) {
    case 0: fn_407628(os, "VCLand"); break;
    case 1: fn_407628(os, "VCAir"); break;
    case 2: fn_407628(os, "VCSea"); break;
    case 3: fn_407628(os, "VCHelicopter"); break;
    case 4: fn_407628(os, "VCNoVehicleCategory"); break;
    default: break;
    }
    return os;
}
} }
