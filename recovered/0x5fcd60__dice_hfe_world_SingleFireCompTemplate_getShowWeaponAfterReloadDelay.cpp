// FUNCTION: BF2 0x5fcd60
// SingleFireCompTemplate::getShowWeaponAfterReloadDelay 0x5fcd60
namespace dice { namespace hfe { namespace world {

extern float get_sfct(void* self, int a, int b);

float getShowWeaponAfterReloadDelay(void* self) {
    return get_sfct(self, 0, 2);
}

}}}
