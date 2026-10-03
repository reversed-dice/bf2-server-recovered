// FUNCTION: BF2 0x6a6e00
namespace dice { namespace hfe { namespace tool {
extern int g_cid_spring;       // 0x00c7d070
extern int g_cid_floating;     // 0x00c7d088
extern int g_cid_engine;       // 0x00c7d090
extern int g_cid_effect;       // 0x00c7d098
extern int g_cid_wheel;        // 0x00c7d068
extern int g_cid_airdraft;     // 0x00c7d064
extern int g_cid_ground;       // 0x00c7d060
extern int g_cid_wing;         // 0x00c7d06c
typedef int (*fn20_t)(void*);

int getTemplateCategory_0x6a6e00(void* unused, void* p) {
    if (((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) == g_cid_spring ||
        ((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) == g_cid_floating ||
        ((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) == g_cid_engine) {
        return 1;
    }
    if ((((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) != g_cid_effect) &&
        (((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) != g_cid_wheel) &&
        (((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) != g_cid_airdraft) &&
        (((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) != g_cid_ground)) {
        if (((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p) == g_cid_wing) {
            return 1;
        }
        ((fn20_t)*(void**)((char*)*(void**)p + 0x20))(p);
        return 0;
    }
    return 0;
}
} } }
// REVERSED_FUNCTION: dice_hfe_tool_ObjectTemplateAdm_getTemplateCategory_dice_hfe_world_IObjectTemplate_constptr (0x6a6e00)
