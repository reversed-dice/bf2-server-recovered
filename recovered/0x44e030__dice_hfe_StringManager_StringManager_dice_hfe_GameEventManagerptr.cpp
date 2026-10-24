// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x44e030
#include <string>
#include <deque>

namespace dice { namespace hfe {

struct StringDataBlock {
    unsigned char m_id;
    unsigned char m_active;
    char pad[6];
    char* m_buffer;
    char* m_end;
};

class GameEventManager;

class IStringManager {
public:
    virtual void _v0();
    virtual void _v1();
};

struct BlockSource {
    std::deque<StringDataBlock*> m_b;
    BlockSource() : m_b() {}
};

class StringManager : public IStringManager {
public:
    virtual bool newStringDataBlock(unsigned int size);

    std::deque<StringDataBlock*> m_blocks;
    void* m_58;
    void* m_60;
    GameEventManager* m_mgr;

    StringManager(GameEventManager* mgr);
};

StringManager::StringManager(GameEventManager* mgr)
    : m_blocks(BlockSource().m_b),
      m_58(0),
      m_60(0),
      m_mgr(mgr)
{
}

} }
