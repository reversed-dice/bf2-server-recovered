// FUNCTION: BF2 0x608760
extern "C" {
    extern unsigned int dice_hfe_world_CID_SeekClosestTargetCompTemplate;
}

namespace dice { namespace hfe { namespace world {

class TargetCompTemplate {
public:
    char m_pad0[0x4c];
    float m_maxDistance;   // +0x4c
};

class TargetComp {
public:
    float getMaxTargetDistance() const;

    char m_pad0[0x18];
    void* m_targetCompTemplate;        // +0x18
    char m_pad1[0x78 - 0x20];
    TargetCompTemplate* m_template;    // +0x78
};

float TargetComp::getMaxTargetDistance() const
{
    typedef void* (*getter_t)(void*);
    typedef void* (*qi_t)(void*, unsigned int);

    void* holder = m_targetCompTemplate;
    void* p = (*(getter_t*)((char*)*(void**)holder + 0x640))(holder);
    if (p) {
        void* t = (*(qi_t*)((char*)*(void**)p + 0xc0))(p, dice_hfe_world_CID_SeekClosestTargetCompTemplate);
        if (t) {
            float d = m_template->m_maxDistance;
            float o = *(float*)((char*)t + 0x18);
            if (o < d) d = o;
            return d;
        }
    }
    return m_template->m_maxDistance;
}

} } }
