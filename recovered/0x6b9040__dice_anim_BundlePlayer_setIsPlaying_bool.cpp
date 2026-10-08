// FUNCTION: BF2 0x6b9040
namespace dice { namespace anim {
class AnimObject {
public:
    char pad_0[0x10];
    void* m_other;
    char pad_18[0x20 - 0x18];
    int m_20;
    char pad_24[0x44 - 0x24];
    char m_44;
};
void setIsPlaying_0x6b9040(void* self, bool v)
{
    AnimObject* o = (AnimObject*)self;
    if (v && o->m_44 != 0 && *(char*)((char*)o->m_other + 0x36) != 0 && *(char*)((char*)o->m_other + 0x3a) == 0) {
        o->m_20 = 0;
    }
    o->m_44 = (char)v;
}
} }
