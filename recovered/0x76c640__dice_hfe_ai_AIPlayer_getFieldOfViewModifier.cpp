// FUNCTION: BF2 0x76c640
extern "C" {
float sinf(float);
float cosf(float);
}

namespace dice { namespace hfe { namespace ai {

typedef void* (*vfn0p)(void*);
typedef float (*vfn0f)(void*);

struct AIPlayer {
    char _pad0[8];
    void* m_obj;

    float getFieldOfViewModifier();
};

float AIPlayer::getFieldOfViewModifier() {
    if (((vfn0p*)*(void***)m_obj)[0x300/8](m_obj) == 0)
        return 1.0f;

    static float reference = 1.0f / (cosf(0.6f) / sinf(0.6f));

    float a = ((vfn0f*)*(void***)m_obj)[0x120/8](m_obj) * 0.5f;
    return cosf(a) / sinf(a) * reference;
}

} } }
// REVERSED_FUNCTION: dice_hfe_ai_AIPlayer_getFieldOfViewModifier (0x76c640)
