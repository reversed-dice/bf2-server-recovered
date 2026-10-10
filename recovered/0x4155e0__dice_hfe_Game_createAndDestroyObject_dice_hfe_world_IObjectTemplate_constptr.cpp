// FUNCTION: BF2 0x4155e0
extern "C" void* dice_hfe_world_objectManager;
extern "C" void* dice_hfe_gameLogic;
extern "C" void* dice_hfe_io_networkManager;
extern "C" void dice_hfe_io_NetworkManager_addNetworkable_dice_hfe_io_INetworkableptr(void* self, void* n);

void Game_createAndDestroyObject(void* self, void* tmpl)
{
    if (tmpl == 0) {
        return;
    }
    void* obj = ((void* (*)(void*, void*, long, long))(((void**)*(void**)dice_hfe_world_objectManager)[4]))(
        dice_hfe_world_objectManager, tmpl, 0, 0);
    if (obj == 0) {
        return;
    }
    void* net = ((void* (*)(void*))(((void**)*(void**)obj)[0x36]))(obj);
    if (net != 0) {
        char b = ((char (*)(void*))(((void**)*(void**)dice_hfe_gameLogic)[0x4f]))(dice_hfe_gameLogic);
        *(char*)((char*)net + 0x20) = b;
        dice_hfe_io_NetworkManager_addNetworkable_dice_hfe_io_INetworkableptr(dice_hfe_io_networkManager, net);
    }
    ((void (*)(void*, void*))(((void**)*(void**)self)[0x28]))(self, obj);
}
// REVERSED_FUNCTION: dice_hfe_Game_createAndDestroyObject_dice_hfe_world_IObjectTemplate_constptr (0x4155e0)
