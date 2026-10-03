// FUNCTION: BF2 0x416320
extern "C" {
    void* operator_new(unsigned long size);
    void dice_hfe_BaseEvent_ctor(void* self);
}
struct Vec3 { float x, y, z; };
struct Ev { void* vtbl; char _pad[16]; Vec3 v; };

extern "C" void* dice_hfe_GameEventMakerMaker_dice_hfe_CreateKitEvent_createEvent()
{
    Ev* o = (Ev*)operator_new(0x30);
    dice_hfe_BaseEvent_ctor(o);
    Vec3* p = &o->v;
    o->vtbl = (void*)0xb2bd70;
    p->x = 0; p->y = 0; p->z = 0;
    return o;
}
