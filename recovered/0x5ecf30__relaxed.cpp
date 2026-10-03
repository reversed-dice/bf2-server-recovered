// FUNCTION: BF2 0x5ecf30
// ReplenishingAmmoCompTemplate::setAbilityStrength 0x5ecf50 — store + div
namespace dice { namespace hfe { namespace world {

void setAbilityStrength(void* self, float v) {
    *(float*)((char*)self + 0x5c) = v;
    *(float*)((char*)self + 0x60) = v / *(float*)0xb2efc4;
}

}}}
