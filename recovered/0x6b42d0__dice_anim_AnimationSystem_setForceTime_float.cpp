// FUNCTION: BF2 0x6b42d0
// AnimationSystem::setForceTime 0x6b42d0 — store + flag
namespace dice { namespace anim {

void setForceTime(void* self, float t) {
    *(float*)((char*)self + 0xa4) = t;
    *(unsigned char*)((char*)self + 0xa8) = 1;
}

}}
