// FUNCTION: BF2 0x6a6fa0
namespace dice { namespace hfe { namespace tool {

bool fn_0x6a6fa0(void* self, int idx) {
    if ((unsigned)idx > 0x7f) return false;
    return *((bool*)((char*)self + (long)idx*16 + 0x10));
}

} } }
// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_isLayerHidden_int (0x6a6fa0)
