// FUNCTION: BF2 0x5ecf50
// ReplenishingAmmoCompTemplate::setAbilityDrain 0x5ecf30 — store + div
namespace dice { namespace hfe { namespace world {

void setAbilityDrain(void* self, float v) {
    *(float*)((char*)self + 0x64) = v;
    *(float*)((char*)self + 0x68) = v / *(float*)0xb2efc4;
}

}}}
