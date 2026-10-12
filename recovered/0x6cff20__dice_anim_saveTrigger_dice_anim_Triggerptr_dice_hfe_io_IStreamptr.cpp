// FUNCTION: BF2 0x6cff20
#include <vector>
namespace dice { namespace hfe { namespace io {
class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};
} } }
namespace dice { namespace anim {
namespace hfeio = dice::hfe::io;

class Trigger {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void save(hfeio::IStream* s);
    virtual bool slot3();
    unsigned char _pad[0x18];
    std::vector<Trigger*> m_children;
};

void saveTrigger(Trigger* t, hfeio::IStream* s) {
    if (!t)
        return;
    for (std::vector<Trigger*>::iterator it = t->m_children.begin(); it != t->m_children.end(); ++it)
        saveTrigger(*it, s);
    if (!t->slot3()) {
        t->save(s);
        s->write("\n", 1);
    }
}

} }
