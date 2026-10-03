// FUNCTION: BF2 0x6a6d30
namespace world { extern unsigned int CID_ControlPointTemplate; }
typedef unsigned int (*fn_getcid)(void*);

extern "C" bool istemplate_6a6d60(void** param_1) {
    if (param_1 != 0) {
        fn_getcid f = *(fn_getcid*)((char*)*(void**)param_1 + 0x20);
        unsigned int cid = f(param_1);
        if (cid == world::CID_ControlPointTemplate) return true;
    }
    return false;
}
// REVERSED_FUNCTION: dice_hfe_tool_isControlPointTemplate_dice_hfe_world_IObjectTemplate_constptr (0x6a6d60)
