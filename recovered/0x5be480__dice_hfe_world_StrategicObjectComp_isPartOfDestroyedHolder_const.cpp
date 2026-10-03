// FUNCTION: BF2 0x5be480
namespace dice { namespace hfe { namespace world {
struct SOC2 {
    unsigned char _pad[0x28];
    void* m_28;
    bool isPartOfDestroyedHolder_0x5be480();
};
bool SOC2::isPartOfDestroyedHolder_0x5be480() {
    void* p = m_28;
    if (p && *(int*)((char*)p + 0x1c) > 0)
        return 1;
    return 0;
}
} } }
