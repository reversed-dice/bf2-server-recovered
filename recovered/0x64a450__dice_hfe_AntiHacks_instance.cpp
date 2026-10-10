// FUNCTION: BF2 0x64a450
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
class AntiHacks {
public:
    int m_id;
    int m_pad;
    void (*m_fn)();
    AntiHacks() : m_pad(0), m_fn((void (*)())0xf6c6e8) {}
    static AntiHacks* theInstance;
    static AntiHacks* instance();
};
AntiHacks* AntiHacks::instance() {
    if (!theInstance) {
        AntiHacks* p = new AntiHacks();
        theInstance = p;
        p->m_id = 0x4711;
    }
    return theInstance;
}
} }
