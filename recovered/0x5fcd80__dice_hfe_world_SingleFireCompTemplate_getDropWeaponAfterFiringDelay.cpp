// FUNCTION: BF2 0x5fcd80
// SingleFireCompTemplate::getDropWeaponAfterFiringDelay 0x5fcd80
namespace dice { namespace hfe { namespace world {

extern float get_sfct(void* self, int a, int b);

float getDropWeaponAfterFiringDelay(void* self) {
    return get_sfct(self, 2, 0);
}

}}}
