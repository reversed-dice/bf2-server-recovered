// FUNCTION: BF2 0x782930
namespace dice { namespace hfe { namespace ai {
typedef bool (*vfn_d0)(void*);
extern void fn_782870(void* self, void* arg);
void cb_782930(void* self, void* arg) {
    if (*(char*)((char*)self + 0x8) != 0)
        return;
    void* g = *(void**)0x010ade38;
    if ((*(vfn_d0*)((char*)*(void**)g + 0xd0))(g))
        return;
    fn_782870(self, arg);
    *(char*)((char*)self + 0x8) = 1;
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateArmament_initFromObject_dice_hfe_world_IObjectptr (0x782930)
