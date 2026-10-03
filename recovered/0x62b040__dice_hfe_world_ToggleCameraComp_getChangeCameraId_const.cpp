// FUNCTION: BF2 0x62b040
// dice::hfe::world::ToggleCameraComp::getChangeCameraId() const -- 0x62b040
//
// Walks the component's object list looking for one that answers the
// IPlayerControlObject interface query, and forwards to that object's camera
// id getter; falls back to the template's default id at +0x40/+0x1c.

typedef char      (*Fn78)(void*);
typedef void*     (*Fn18)(void*, unsigned);
typedef void*     (*Fn88)(void*);
typedef unsigned  (*Fn58)(void*);

unsigned getChangeCameraId_62b040(void* self)
{
    char* s = (char*)self;
    void* holder = *(void**)(s + 0x38);
    if (holder != 0) {
        void* owner = *(void**)((char*)holder + 8);
        if (owner != 0) {
            if ((*(Fn78*)(*(char**)owner + 0x78))(owner)) {
                void* node = *(void**)(s + 0x18);
                while (node != 0) {
                    void* itf = (*(Fn18*)(*(char**)node + 0x18))(node, *(unsigned*)0xc7ce6c);
                    if (itf != 0) {
                        void* cam = (*(Fn88*)(*(char**)itf + 0x88))(itf);
                        return (*(Fn58*)(*(char**)cam + 0x58))(cam);
                    }
                    node = *(void**)((char*)node + 0x50);
                }
            }
        }
    }
    return *(unsigned*)(*(char**)(s + 0x40) + 0x1c);
}
// REVERSED_FUNCTION: dice_hfe_world_ToggleCameraComp_getChangeCameraId_const (0x62b040)
