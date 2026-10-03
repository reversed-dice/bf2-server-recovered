// FUNCTION: BF2 0x5fd1c0
// SingleFireCompTemplate::setHideWeaponAfterFiringDelay 0x5fd1c0
namespace dice { namespace hfe { namespace world {

extern void set_sfct(void* self, int a, int b, float v);

void setHideWeaponAfterFiringDelay(void* self, float v) {
    set_sfct(self, 0, 1, v);
}

}}}
