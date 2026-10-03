// FUNCTION: BF2 0x785350
namespace dice { namespace hfe { namespace ai {

extern "C" void dice_hfe_ai_IAIObjectCover_IAIObjectCover_dice_hfe_ai_IAIObjectptr(void*, void*);
void fn_0x785350(void* self, void* a, void* b) {
    dice_hfe_ai_IAIObjectCover_IAIObjectCover_dice_hfe_ai_IAIObjectptr(self, a);
    *(void**)((char*)self+0x10) = b;
    *(void**)self = (void*)0xba3df0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIObjectCover_AIObjectCover_dice_hfe_ai_IAIObjectptr_dice_hfe_ai_AITemplateCoverptr (0x785350)
