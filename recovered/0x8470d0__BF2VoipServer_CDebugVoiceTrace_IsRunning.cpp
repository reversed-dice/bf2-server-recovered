// FUNCTION: BF2 0x8470d0
namespace dice { namespace hfe {
struct CVT {
    void* m_ptr;
    bool IsRunning_0x8470d0() const;
};
bool CVT::IsRunning_0x8470d0() const {
    return m_ptr != 0;
}
} }
