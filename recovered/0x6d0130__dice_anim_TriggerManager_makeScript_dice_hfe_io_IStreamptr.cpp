// FUNCTION: BF2 0x6d0130
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe { namespace io { class IStream; } } }

namespace dice { namespace hfe { namespace anim {

class Trigger {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(int);
    char _pad0[0x38];
    unsigned char m_40;
};

void saveTrigger(Trigger* t, dice::hfe::io::IStream* s);

class TriggerManager {
public:
    std::map<unsigned int, Trigger*> m_triggers;
    void makeScript(dice::hfe::io::IStream* s);
};

void TriggerManager::makeScript(dice::hfe::io::IStream* s)
{
    ((void (*)(dice::hfe::io::IStream*, const void*, int))(*(void***)s)[5])(s, (const void*)0xb926a1, 0x16);
    std::map<unsigned int, Trigger*>& tr = m_triggers;
    std::map<unsigned int, Trigger*>::iterator it = tr.begin();
    while (it != tr.end()) {
        ((void (*)(Trigger*, int))(*(void***)it->second)[4])(it->second, 0);
        ++it;
    }
    for (std::map<unsigned int, Trigger*>::iterator it = tr.begin(); it != tr.end(); ++it) {
        Trigger* t = it->second;
        if (t->m_40 == 0)
            saveTrigger(t, s);
    }
}

} } }
