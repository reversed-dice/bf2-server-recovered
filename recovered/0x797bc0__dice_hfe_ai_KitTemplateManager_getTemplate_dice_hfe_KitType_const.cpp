// FUNCTION: BF2 0x797bc0
namespace dice { namespace hfe { namespace ai {
void* cb_797bc0(void* self, unsigned int idx) {
    if (idx == 0xd)
        return 0;
    void** tab = *(void***)((char*)self + 0x70);
    return tab[idx];
}
} } }
// REVERSED_FUNCTION: dice_hfe_ai_KitTemplateManager_getTemplate_dice_hfe_KitTemplate (0x797bc0)
