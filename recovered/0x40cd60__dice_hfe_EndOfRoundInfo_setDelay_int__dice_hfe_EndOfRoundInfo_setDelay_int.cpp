// FUNCTION: BF2 0x40cd60
namespace dice {
namespace hfe {

class EndOfRoundInfo {
public:
    void setDelay(int delay);

private:
    void* vtable;
    int m_delay;
    bool m_hasDelay;
};

void EndOfRoundInfo::setDelay(int delay) {
    m_delay = delay;
    m_hasDelay = true;
}

} // namespace hfe
} // namespace dice