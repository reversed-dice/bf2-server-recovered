// FUNCTION: BF2 0x6a6f40
namespace dice { namespace hfe { namespace tool {
typedef void (*vfn3i)(void*, int, int, int);
void fn_0x6a6f40(void* self, void* obj) {
    if (!obj) return;
    void** vt = *(void***)obj;
    ((vfn3i)vt[0x208/8])(obj, 0x40, 0, 0);
}
} } }
// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_forceStart_dice_hfe_world_IObjectptr (0x6a6f40)
