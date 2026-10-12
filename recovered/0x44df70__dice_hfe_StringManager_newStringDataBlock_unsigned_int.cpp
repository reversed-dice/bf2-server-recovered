// FUNCTION: BF2 0x44df70
// BF2_FLAGS: -fno-strict-aliasing

namespace dice { namespace hfe {

struct StringDataBlock {
    unsigned char m_id;
    unsigned char m_active;
    char pad[6];
    char* m_buffer;
    char* m_end;
};

class StringManager {
public:
    virtual void _v0();
    virtual void _v1();
    virtual bool newStringDataBlock(unsigned int size);

    char pad[0x58];
    StringDataBlock* m_currentBlock;
};

bool StringManager::newStringDataBlock(unsigned int size)
{
    if (m_currentBlock != 0)
        return false;
    StringDataBlock* block = new StringDataBlock();
    block->m_id = size;
    block->m_buffer = new char[size];
    block->m_active = 0;
    block->m_end = block->m_buffer + size - 12;
    m_currentBlock = block;
    return true;
}

} }
