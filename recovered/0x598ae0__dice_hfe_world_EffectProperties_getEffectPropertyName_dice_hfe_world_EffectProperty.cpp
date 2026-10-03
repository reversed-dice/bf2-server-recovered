// FUNCTION: BF2 0x598ae0
// EffectProperties::getEffectPropertyName 0x598ae0 — membre + table
namespace dice { namespace hfe { namespace world {

void* getEffectPropertyName(void* self, int prop) {
    return *(void**)(0xf67880 + (long)prop * 8);
}

}}}
