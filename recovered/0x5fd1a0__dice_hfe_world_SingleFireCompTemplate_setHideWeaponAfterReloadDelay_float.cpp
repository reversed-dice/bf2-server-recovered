// FUNCTION: BF2 0x5fd1a0
// SingleFireCompTemplate::setHideWeaponAfterReloadDelay 0x5fd1a0
namespace dice { namespace hfe { namespace world {

extern void set_sfct(void* self, int a, int b, float v);

void setHideWeaponAfterReloadDelay(void* self, float v) {
    set_sfct(self, 2, 1, v);
}

}}}
