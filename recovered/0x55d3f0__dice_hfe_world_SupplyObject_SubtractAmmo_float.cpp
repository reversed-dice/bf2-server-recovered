// FUNCTION: BF2 0x55d3f0
// SupplyObject::SubtractAmmo 0x55d3f0 — drain avec fallback
namespace dice { namespace hfe { namespace world {

void SubtractAmmo(void* self, float amount) {
    if (*(float*)((char*)self + 0x244) > amount)
        *(float*)((char*)self + 0x244) -= amount;
    else
        *(float*)((char*)self + 0x24c) -= amount;
}

}}}
