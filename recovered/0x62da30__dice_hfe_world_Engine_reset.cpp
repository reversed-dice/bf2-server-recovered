// FUNCTION: BF2 0x62da30
namespace dice { namespace hfe { namespace world {
void engine_reset_helper(void* self);
class Engine {
public:
    char _pad[0x334];
    float m_334;
    int m_338;
    int m_33c;
    float m_340;
    void reset();
};
void Engine::reset() {
    m_334 = 0.0f; m_338 = 0; m_33c = 0; m_340 = 0.0f;
    engine_reset_helper(this);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_Engine_reset (0x62da30)
