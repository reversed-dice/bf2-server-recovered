// FUNCTION: BF2 0x4163f0
// BF2_FLAGS: -fno-strict-aliasing
extern "C" {
    void* operator_new(unsigned long size);
    void dice_hfe_BaseEvent_ctor(void* self);
}

struct Vec3 { float x, y, z; };

struct KilledData {
    char c0;
    char c1;
    char c2;
    char pad3;
    short s;
    short pad6;
    int i1;
    int i2;
    Vec3 pos;
    char end;
};

struct Ev_4163f0 {
    void* vtbl;
    char _pad[8];
    KilledData data;
};

extern "C" void* dice_hfe_GameEventMakerMaker_dice_hfe_KilledByEvent_createEvent()
{
    Ev_4163f0* o = (Ev_4163f0*)operator_new(0x30);
    dice_hfe_BaseEvent_ctor(o);
    KilledData* d = &o->data;
    o->vtbl = (void*)0xb2d230;
    d->c0 = 0;
    d->c1 = 0;
    d->c2 = 0;
    d->s = 0;
    d->i1 = 0;
    d->i2 = 0;
    volatile Vec3* p = &d->pos;
    p->x = 0; p->y = 0; p->z = 0;
    d->end = 0;
    return o;
}
