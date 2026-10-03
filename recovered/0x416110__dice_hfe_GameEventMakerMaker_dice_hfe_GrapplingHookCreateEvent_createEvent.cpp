// FUNCTION: BF2 0x416110
extern "C" {
    void* operator_new(unsigned long size);
    void dice_hfe_BaseEvent_ctor(void* self);
}

struct Vec3 { float x, y, z; };

struct Ev_416110 {
    void* vtbl;
    char _gap[20];
    Vec3 v1;
    Vec3 v2;
};

extern "C" void* dice_hfe_GameEventMakerMaker_dice_hfe_GrapplingHookCreateEvent_createEvent()
{

Ev_416110* o = (Ev_416110*)operator_new(0x38);
dice_hfe_BaseEvent_ctor(o);
volatile Vec3* p = &o->v1;
o->vtbl = (void*)0xb2cb90;
p->x = 0; p->y = 0; p->z = 0;
p = &o->v2;
p->x = 0; p->y = 0; p->z = 0;
return o;
}
