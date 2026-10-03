// FUNCTION: BF2 0x6b4790
// BoneAnimation dtor 0x6b4790 — flag + tail-call
namespace dice { namespace anim {

extern void boneanim_free(void* self);

void boneanimation_dtor(void* self) {
    if (*(unsigned char*)self != 0)
        boneanim_free(self);
}

}}
