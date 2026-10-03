// FUNCTION: BF2 0x5fd1b0
// SingleFireCompTemplate::setShowWeaponAfterReloadDelay 0x5fd1b0
namespace dice { namespace hfe { namespace world {

extern void set_sfct(void* self, int a, int b, float v);

void setShowWeaponAfterReloadDelay(void* self, float v) {
    set_sfct(self, 2, 0, v);
}

}}}
