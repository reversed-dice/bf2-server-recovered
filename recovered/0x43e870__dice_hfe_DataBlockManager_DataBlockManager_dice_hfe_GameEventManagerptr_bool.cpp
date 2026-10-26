// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x43e870
#include <deque>

struct DataBlock;
struct GameEventManager;

struct VPtrStore {
    void* m_vt;
    VPtrStore() { *(void**)this = (void*)0xb2f690; }
};

struct EmptyBlocks {
    std::deque<DataBlock*> m_blocks;
};

struct DataBlockManager : VPtrStore {
    std::deque<DataBlock*> m_blocks;
    long m_58;
    long m_60;
    GameEventManager* m_68;
    bool m_70;
    DataBlockManager(GameEventManager* p, bool b);
};

DataBlockManager::DataBlockManager(GameEventManager* p, bool b)
    : m_blocks(EmptyBlocks().m_blocks), m_58(0), m_60(0), m_68(p), m_70(b) {}
