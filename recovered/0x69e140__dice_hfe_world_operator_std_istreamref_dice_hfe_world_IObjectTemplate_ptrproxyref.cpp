// FUNCTION: BF2 0x69e140
#include <string>

extern void* dice_hfe_world_playerManager;

typedef void* (*FnStreamIn)(void*, std::string*);
typedef void* (*FnGetPlayer)(void*, std::string*);

extern "C" {
    void* _ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_E(void* is, std::string* s);
}

void* operator_iobjecttemplate(void* is, void** out) {
    std::string str;

    _ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_E(is, &str);

    void* pm = dice_hfe_world_playerManager;
    void* result = ((FnGetPlayer)*(void**)((char*)*(void**)pm + 0x48))(pm, &str);
    *out = result;

    return is;
}
