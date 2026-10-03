// FUNCTION: BF2 0x6ba5c0
// RagDollTemplate::setParticleCollisionCriteria 0x6ba5c0 — 2 float stores
namespace dice { namespace anim {

void setParticleCollisionCriteria(void* self, float a, float b) {
    *(float*)((char*)self + 0x118) = a;
    *(float*)((char*)self + 0x11c) = b;
}

}}
