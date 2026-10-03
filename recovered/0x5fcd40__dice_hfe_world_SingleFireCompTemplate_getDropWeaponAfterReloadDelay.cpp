// FUNCTION: BF2 0x5fcd40
// SingleFireCompTemplate::getDropWeaponAfterReloadDelay 0x5fcd40 — 2 args constants
namespace dice { namespace hfe { namespace world {

extern float gdwar(void* self, int a, int b);

float getDropWeaponAfterReloadDelay(void* self) {
    return gdwar(self, 2, 2);
}

}}}
