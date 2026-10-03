// FUNCTION: BF2 0x5f93a0
namespace dice { namespace hfe { namespace world {

extern "C" void dice_hfe_world_FireCompTemplate_FireCompTemplate(void*);
extern "C" void dice_hfe_world_LPFireCompTemplate_setRadioMessageDelay_float(void*, float);

void fn_0x5f93a0(void* self) {
    dice_hfe_world_FireCompTemplate_FireCompTemplate(self);
    *(void**)self = (void*)0xb74090;
    *(void**)((char*)self+8) = (void*)0xb74118;
    *(unsigned*)((char*)self+0x8c) = 1;
    dice_hfe_world_LPFireCompTemplate_setRadioMessageDelay_float(self, 0.0f);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_LPFireCompTemplate_LPFireCompTemplate (0x5f93a0)
