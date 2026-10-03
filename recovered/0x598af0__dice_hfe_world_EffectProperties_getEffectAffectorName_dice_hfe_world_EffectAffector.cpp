// FUNCTION: BF2 0x598af0
// EffectProperties::getEffectAffectorName 0x598af0 — membre + table
namespace dice { namespace hfe { namespace world {

void* getEffectAffectorName(void* self, int aff) {
    return *(void**)(0xf67840 + (long)aff * 8);
}

}}}
