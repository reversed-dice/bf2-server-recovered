// FUNCTION: BF2 0x58e630
// AirDraftEffectBundle::handleMessage(TemplateMessage, IPlayer*, bool)

struct AirDraftEffectBundle {
    void* vtable;
};

extern "C" void fn_58e5e0(AirDraftEffectBundle* self);

extern "C" void dice_hfe_world_AirDraftEffectBundle_handleMessage(AirDraftEffectBundle* self, int msg, void* player, bool managed)
{
    if (managed) return;
    if (msg == 4) {
        void** vtable = (void**)*(void**)self;
        ((void(*)(AirDraftEffectBundle*, int, int))vtable[0xc0/8])(self, 0x1000, 0);
    } else if (msg == 5) {
        void** vtable = (void**)*(void**)self;
        ((void(*)(AirDraftEffectBundle*, int, int))vtable[0xc0/8])(self, 0, 0x1000);
        fn_58e5e0(self);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_AirDraftEffectBundle_handleMessage (0x58e630)
