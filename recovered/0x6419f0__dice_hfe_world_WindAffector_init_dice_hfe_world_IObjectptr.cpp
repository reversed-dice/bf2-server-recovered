// FUNCTION: BF2 0x6419f0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class IObject;
class IWindAffector {};

extern void* windManager;

class WindAffector : public IWindAffector {
public:
    void init(IObject* obj);
    char _pad[0x10];
    void* m_10;
    IObject* m_18;
    char _pad2[4];
    float m_24;
};

void WindAffector::init(IObject* obj)
{
    m_18 = obj;
    m_24 = ((float (*)(void*))(*(void***)m_10)[0xc8 / 8])(m_10);
    if (windManager != 0)
        ((void (*)(void*, void*))(*(void***)windManager)[0x80 / 8])(windManager, this);
}

} } }
