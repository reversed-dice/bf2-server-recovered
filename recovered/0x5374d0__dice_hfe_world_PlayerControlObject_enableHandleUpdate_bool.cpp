// FUNCTION: BF2 0x5374d0
namespace dice { namespace hfe { namespace world {

typedef void (*vfn2)(void*,int,int);
void fn_0x5374d0(void* self, bool val) {
    if (val) {
        *(unsigned*)((char*)self+0x258) = 0xbf800000u;
        void** vt = *(void***)self;
        ((vfn2)vt[0xc0/8])(self, 0x800, 0);
    } else {
        if (!(*(char*)((char*)self+0xa) & 0x40)) {
            *(unsigned*)((char*)self+0x258) = 0x40400000u;
        }
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_enableHandleUpdate_bool (0x5374d0)
