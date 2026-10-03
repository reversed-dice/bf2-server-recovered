// FUNCTION: BF2 0x58ed60
struct RbTreeLike { void erase(void*); };
extern "C" void dice_hfe_world_SimpleObject_dtor_SimpleObject(void*);
extern "C" void dtor_58ed60(char* param_1) {
    *(void**)param_1 = (void*)0xb5d190;
    *(void**)(param_1 + 0x100) = (void*)0xb5d4a0;
    void* obj = *(void**)(param_1 + 0x2d0);
    if (obj != 0) {
        (*(void(**)(void*))((char*)(*(void**)obj) + 8))(obj);
    }
    operator delete(*(void**)(param_1 + 0x2d8));
    RbTreeLike* t = (RbTreeLike*)(param_1 + 0x230);
    t->erase(*(void**)((char*)t + 0x10));
    dice_hfe_world_SimpleObject_dtor_SimpleObject(param_1);
    operator delete(param_1);
}
// REVERSED_FUNCTION: dice_hfe_world_AirDraftEffectBundle_dtor_AirDraftEffectBundle (0x58ed60)
