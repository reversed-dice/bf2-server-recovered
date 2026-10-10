// FUNCTION: BF2 0x788e00
namespace dice { namespace hfe {
namespace world {
extern unsigned int IID_ISoldier;
}

namespace ai {

class AIObjectPhysical {
public:
    virtual ~AIObjectPhysical();
    virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
    virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
    virtual void d10(); virtual void d11(); virtual void d12(); virtual void d13();
    virtual void d14(); virtual void d15(); virtual void d16(); virtual void d17();
    virtual void d18(); virtual void d19(); virtual void d20();
    virtual int isInAir() const;

    void* m_sub1;
    char _pad[0x10];
    void* m_sub4;
};

int AIObjectPhysical::isInAir() const {
    void* p = ((void* (*)(void*))(*(void***)m_sub1)[0x40 / 8])(m_sub1);
    void* soldier = ((void* (*)(void*, unsigned int))(*(void***)p)[0x18 / 8])(p, dice::hfe::world::IID_ISoldier);
    bool b = ((bool (*)(void*))(*(void***)m_sub4)[0x238 / 8])(m_sub4);
    if (!b) {
        if (soldier) {
            void* p2 = ((void* (*)(void*))(*(void***)m_sub1)[0x40 / 8])(m_sub1);
            char* q = *(char**)((char*)p2 + 0x90);
            return (*(unsigned char*)(q + 0x11a)) ^ 1;
        }
        return ((bool (*)(void*))(*(void***)m_sub4)[0x360 / 8])(m_sub4);
    }
    return 0;
}

} } }
