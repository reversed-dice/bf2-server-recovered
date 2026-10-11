// FUNCTION: BF2 0x6304e0
namespace dice { namespace hfe {
namespace world { class IObject; class EngineBase; class EngineTemplate; }
class EngineSoundTemplate;

class EngineSound {
public:
    EngineSound(world::EngineTemplate const*, world::EngineBase*, world::IObject*, EngineSoundTemplate const*, float const*);
    virtual ~EngineSound();
    virtual void v1();
    virtual void release();
    char _pad0[0xf0];
};

class EngineSoundTemplate {
public:
    char _pad0;
    bool m_b;
};

namespace world {

class IObject;
class EngineBase;
IObject* getRootParent(IObject const*);

class EngineTemplate {
public:
    char _pad0[0x6f0];
    EngineSoundTemplate m_snd;
};

class EngineBase {
public:
    void initSound();
    char _pad0[0x2c0];
    EngineTemplate* m_template;
    char _pad2c8[0xc];
    float m_2d4;
    char _pad2d8[0x310 - 0x2d8];
    EngineSound* m_sound;
};

void EngineBase::initSound()
{
    IObject* root = (IObject*)this;
    if (m_template->m_snd.m_b)
        root = getRootParent((IObject const*)this);
    EngineSoundTemplate* st = &m_template->m_snd;
    EngineSound* s = new EngineSound(m_template, this, root, st, &m_2d4);
    if (s != m_sound) {
        if (m_sound)
            m_sound->release();
        m_sound = s;
    }
}

} } }
