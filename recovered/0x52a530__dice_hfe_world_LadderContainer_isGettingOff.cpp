// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x52a530
namespace dice { namespace hfe { namespace world {
extern float* g_startGetOff;
class Ladder { public: float getAbsoluteTop(); };
class LadderContainer { public: char _pad0[0x600]; Ladder* m_ladder; public: bool isGettingOff(); };
typedef void* (*VFn)(void*);
bool LadderContainer::isGettingOff() {
    void* o = ((VFn)(*(void***)this)[0x108 / 8])((void*)this);
    float* base = g_startGetOff;
    if (!(*base > 0.0f))
        return false;
    float a = *(float*)((char*)o + 0x34);
    float top = m_ladder->getAbsoluteTop();
    if (a > top - *base)
        return true;
    return false;
}
} } }
