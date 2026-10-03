// FUNCTION: BF2 0x40b230
namespace dice { namespace hfe {

class BF2Engine;
extern void BF2Engine_shutdown(BF2Engine* engine);

class BF2 {
public:
    BF2Engine* m_engine;
    void shutdown();
};

void BF2::shutdown() {
    BF2Engine_shutdown(m_engine);
    if (__builtin_expect(m_engine != 0, 1)) {
        ((void (*)(void*))((*(void***)m_engine)[1]))(m_engine);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_BF2_shutdown (0x40b230)