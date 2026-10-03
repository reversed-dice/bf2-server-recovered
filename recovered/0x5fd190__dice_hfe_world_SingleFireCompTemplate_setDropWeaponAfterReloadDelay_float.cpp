// FUNCTION: BF2 0x5fd190
// SingleFireCompTemplate::setDropWeaponAfterReloadDelay 0x5fd190
namespace dice { namespace hfe { namespace world {

extern void set_sfct(void* self, int a, int b, float v);

void setDropWeaponAfterReloadDelay(void* self, float v) {
    set_sfct(self, 2, 2, v);
}

}}}
