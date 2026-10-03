// FUNCTION: BF2 0x46cd50
namespace dice { namespace hfe {

int compareIgnoreCase(char const* a, char const* b);

void auth_cb(int param_1, int param_2, int param_3, char* param_4, void* param_5)
{
    unsigned int result = 0;
    if (param_3 == 0) {
        if (param_4 != 0 && *param_4 != '\0') {
            int cmp = compareIgnoreCase(param_4, "Your CD Key is disabled. Contact customer service.");
            result = (-((unsigned int)cmp < 1U) & 2U) + 2U;
        } else {
            result = 3U;
        }
    }
    typedef void (*Callback)(int, unsigned int, void*);
    void** ctx = (void**)param_5;
    ((Callback)(ctx[1]))(param_2, result, ctx[2]);
}

} }
// REVERSED_FUNCTION: dice_hfe_auth_cb_int_int_int_charptr_voidptr (0x46cd50)