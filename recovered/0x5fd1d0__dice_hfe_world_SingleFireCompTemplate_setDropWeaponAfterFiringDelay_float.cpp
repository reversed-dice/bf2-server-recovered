// FUNCTION: BF2 0x5fd1d0
// SingleFireCompTemplate::setDropWeaponAfterFiringDelay 0x5fd1d0
namespace dice { namespace hfe { namespace world {

extern void set_sfct(void* self, int a, int b, float v);

void setDropWeaponAfterFiringDelay(void* self, float v) {
    set_sfct(self, 0, 2, v);
}

}}}
