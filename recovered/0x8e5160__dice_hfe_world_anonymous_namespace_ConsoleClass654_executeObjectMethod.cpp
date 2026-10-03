// FUNCTION: BF2 0x8e5160
namespace dice { namespace hfe {
struct Comp {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void setX(bool);
    virtual float getX();
};
extern "C" unsigned dice_hfe_world_CID_DefaultDetonationCompTemplate;
extern "C" unsigned dice_hfe_world_IID_IProjectileDetonationCompTemplate;
extern "C" Comp* dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);

long cb(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(param_1 + 0x108) = 1;
        Comp* c = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IProjectileDetonationCompTemplate,
            dice_hfe_world_CID_DefaultDetonationCompTemplate);
        *(char*)(param_1 + 0x10a) = (c->getX() != 0.0f);
        return param_1 + 0x10a;
    }
    nz:
    if (sel != 1) return 0;
    {
        unsigned cid = dice_hfe_world_CID_DefaultDetonationCompTemplate;
        bool v = **(bool**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        Comp* c = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IProjectileDetonationCompTemplate, cid);
        c->setX(v);
        return 0;
    }
}
} }
