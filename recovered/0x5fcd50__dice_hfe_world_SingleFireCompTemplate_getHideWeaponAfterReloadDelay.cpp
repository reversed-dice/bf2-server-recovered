// FUNCTION: BF2 0x5fcd50
// SingleFireCompTemplate::getHideWeaponAfterReloadDelay 0x5fcd50
namespace dice { namespace hfe { namespace world {

extern float get_sfct(void* self, int a, int b);

float getHideWeaponAfterReloadDelay(void* self) {
    return get_sfct(self, 1, 2);
}

}}}
