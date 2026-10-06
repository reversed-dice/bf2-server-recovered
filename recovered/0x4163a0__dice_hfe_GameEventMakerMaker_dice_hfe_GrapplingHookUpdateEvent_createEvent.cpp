// FUNCTION: BF2 0x4163a0
extern "C" {
    void* operator_new(unsigned long size);
    void dice_hfe_BaseEvent_ctor(void* self);
}

struct Vec3 { float x, y, z; };

struct HookData {
    short s;
    char c;
    char pad;
    Vec3 v1;
    Vec3 v2;
    char end;
};

struct Ev_4163a0 {
    void* vtbl;
    char _pad[8];
    HookData data;
};

extern "C" void* dice_hfe_GameEventMakerMaker_dice_hfe_GrapplingHookUpdateEvent_createEvent()
{
    Ev_4163a0* o = (Ev_4163a0*)operator_new(0x30);
    dice_hfe_BaseEvent_ctor(o);
    HookData* d = &o->data;
    o->vtbl = (void*)0xb2cc70;
    d->s = 0;
    d->c = 0;
    volatile Vec3* p = &d->v1;
    p->x = 0; p->y = 0; p->z = 0;
    p = &d->v2;
    p->x = 0; p->y = 0; p->z = 0;
    d->end = 0;
    return o;
}
