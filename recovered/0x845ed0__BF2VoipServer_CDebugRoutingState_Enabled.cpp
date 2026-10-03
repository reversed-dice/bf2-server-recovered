// FUNCTION: BF2 0x845ed0
namespace dice { namespace hfe {
struct VR {
    unsigned char _pad[0x8];
    void* m_ptr;
    bool enabled_0x845ed0() const;
};
bool VR::enabled_0x845ed0() const {
    return m_ptr != 0;
}
} }
