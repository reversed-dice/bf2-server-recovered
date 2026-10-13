// FUNCTION: BF2 0x5f3560
namespace dice { namespace hfe { namespace world {

namespace { extern int WorldPref_getTickCount(); }

struct ExplosivesFireComp {
    char pad[0x174];
    int m_174;         // +0x174
    char pad2[0x38];
    int m_1b0;         // +0x1b0
    char pad3[0x4];
    char m_1b8;        // +0x1b8
    int busy();
};

typedef int (*Fnv72)(void*);

int ExplosivesFireComp::busy() {
    if (m_174 != 0) return 1;
    if (m_1b8 != 0) return 1;
    int a = ((Fnv72)(*(void***)this)[72])(this);
    if (a > 0) {
        if (((Fnv72)(*(void***)this)[72])(this) <= 3) return 1;
    }
    if (((Fnv72)(*(void***)this)[72])(this) > 3) {
        m_1b0 = WorldPref_getTickCount();
    }
    return 0;
}

} } }
