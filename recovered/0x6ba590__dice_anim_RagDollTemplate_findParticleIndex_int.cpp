// FUNCTION: BF2 0x6ba590
// RagDollTemplate::findParticleIndex 0x6ba590 — v2: index long (sign-extend)
namespace dice { namespace anim {

int findParticleIndex(void* self, int index) {
    if (index > 0x7f)
        return -1;
    long i = index;
    return *(int*)((char*)self + 0x158 + 4 * i);
}

}}
