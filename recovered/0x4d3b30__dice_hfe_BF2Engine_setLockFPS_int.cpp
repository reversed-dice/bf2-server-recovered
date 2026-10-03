// FUNCTION: BF2 0x4d3b30
namespace dice { namespace hfe {
struct Engine {
    unsigned char _pad[0xac];
    int m_fps;
    void setLockFPS_0x4d3b30(int fps);
};
void Engine::setLockFPS_0x4d3b30(int fps) {
    if (fps > 0)
        m_fps = fps;
}
} }
