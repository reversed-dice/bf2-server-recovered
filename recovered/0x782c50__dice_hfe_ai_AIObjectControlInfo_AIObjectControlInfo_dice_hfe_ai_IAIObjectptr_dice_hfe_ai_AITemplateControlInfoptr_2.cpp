// FUNCTION: BF2 0x782c50
namespace dice { namespace hfe { namespace ai {

extern "C" void dice_hfe_ai_IAIObjectControlInfo_IAIObjectControlInfo_dice_hfe_ai_IAIObjectptr(void*, void*);
void fn_0x782c50(void* self, void* a, void* b) {
    dice_hfe_ai_IAIObjectControlInfo_IAIObjectControlInfo_dice_hfe_ai_IAIObjectptr(self, a);
    *(void**)((char*)self+0x10) = b;
    *(void**)self = (void*)0xba3890;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectControlInfo_AIObjectControlInfo_dice_hfe_ai_IAIObjectptr_dice_hfe_ai_AITemplateControlInfoptr (0x782c50)
