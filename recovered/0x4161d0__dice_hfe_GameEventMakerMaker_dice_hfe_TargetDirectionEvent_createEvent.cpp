// FUNCTION: BF2 0x4161d0
// dice_hfe_GameEventMakerMaker_dice_hfe_TargetDirectionEvent_createEvent (0x4161d0)
// near-miss 94.74 gcc 4.0: one scheduling line (gcc hoists the first store of the
// second Vec3 before its LEA). Permuter target.

extern "C" {
    void* operator_new(unsigned long size);
    void dice_hfe_BaseEvent_ctor(void* self);
}

struct Vec3 { float x, y, z; };

struct Ev_4161d0 {
    void* vtbl;
    char _gap[0x8];
    Vec3 v1;
    Vec3 v2;
};

extern "C" void* dice_hfe_GameEventMakerMaker_dice_hfe_TargetDirectionEvent_createEvent()
{
    Ev_4161d0* o = (Ev_4161d0*)operator_new(0x30);
    dice_hfe_BaseEvent_ctor(o);
    volatile Vec3* p = &o->v1;
    o->vtbl = (void*)0xb2e590;
    p->x = 0; p->y = 0; p->z = 0;
    p = &o->v2;
    p->x = 0; p->y = 0; p->z = 0;
    return o;
}
