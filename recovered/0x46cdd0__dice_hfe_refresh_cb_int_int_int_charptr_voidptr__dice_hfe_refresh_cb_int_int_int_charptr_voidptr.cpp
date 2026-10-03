// FUNCTION: BF2 0x46cdd0
namespace dice { namespace hfe {

int dice_hfe_compareIgnoreCase(char const*, char const*);

void refresh_cb(int param_1, int param_2, int param_3, char* param_4, void* param_5) {
    unsigned int uVar2;
    uVar2 = 0;
    if (param_3 == 0) {
        if (param_4 != 0 && *param_4 != '\0') {
            int iVar1 = dice_hfe_compareIgnoreCase(param_4, "Your CD Key is disabled. Contact customer service.");
            uVar2 = (-(iVar1 == 0) & 2U) + 2;
        } else {
            uVar2 = 3;
        }
    }
    typedef void (*Callback)(int, unsigned int, void*);
    Callback cb = (Callback)(*reinterpret_cast<void**>(reinterpret_cast<char*>(param_5) + 8));
    cb(param_2, uVar2, *reinterpret_cast<void**>(reinterpret_cast<char*>(param_5) + 0x10));
}

} }
// REVERSED_FUNCTION: dice_hfe_refresh_cb_int_int_int_charptr_voidptr (0x46cdd0)