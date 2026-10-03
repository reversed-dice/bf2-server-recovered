// FUNCTION: BF2 0x5fcd70
// SingleFireCompTemplate::getHideWeaponAfterFiringDelay 0x5fcd70
namespace dice { namespace hfe { namespace world {

extern float get_sfct(void* self, int a, int b);

float getHideWeaponAfterFiringDelay(void* self) {
    return get_sfct(self, 1, 0);
}

}}}
