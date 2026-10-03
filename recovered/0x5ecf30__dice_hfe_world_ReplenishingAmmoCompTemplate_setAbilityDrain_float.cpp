// FUNCTION: BF2 0x5ecf30
// ReplenishingAmmoCompTemplate::setAbilityDrain 0x5ecf30 — store + div
namespace dice { namespace hfe { namespace world {

void setAbilityDrain(void* self, float v) {
    *(float*)((char*)self + 0x5c) = v;
    *(float*)((char*)self + 0x60) = v / *(float*)0xb2efc4;
}

}}}
