// BF2_FLAGS: -fno-tree-dominator-opts
// FUNCTION: BF2 0x763e20
namespace dice { namespace hfe {

struct SoldierSound {
    char _pad[8];
    void* m_soldier;

    bool allowMovementSounds() const;
};

bool SoldierSound::allowMovementSounds() const {
    if (!((void* (*)(void*))(*(void***)m_soldier)[0x300 / 8])(m_soldier))
        return false;
    if (*(void**)((char*)m_soldier + 0x50) == 0)
        return true;
    if (!((int (*)(void*))(*(void***)m_soldier)[0x598 / 8])(m_soldier))
        return false;
    return true;
}

} }
