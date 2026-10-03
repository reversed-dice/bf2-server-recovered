// FUNCTION: BF2 0x5acf40
// WheelEffectBundle::handleMessage(TemplateMessage, IPlayer*, bool)

struct WheelEffectBundle {
    void* vtable;
};

extern "C" void fn_5acf10(WheelEffectBundle* self);

extern "C" void dice_hfe_world_WheelEffectBundle_handleMessage(WheelEffectBundle* self, int msg, void* player, bool managed)
{
    if (managed) return;
    if (msg == 4) {
        void** vtable = (void**)*(void**)self;
        ((void(*)(WheelEffectBundle*, int, int))vtable[0xc0/8])(self, 0x1000, 0);
    } else if (msg == 5) {
        void** vtable = (void**)*(void**)self;
        ((void(*)(WheelEffectBundle*, int, int))vtable[0xc0/8])(self, 0, 0x1000);
        fn_5acf10(self);
    }
}
// REVERSED_FUNCTION: dice_hfe_world_WheelEffectBundle_handleMessage (0x5acf40)
