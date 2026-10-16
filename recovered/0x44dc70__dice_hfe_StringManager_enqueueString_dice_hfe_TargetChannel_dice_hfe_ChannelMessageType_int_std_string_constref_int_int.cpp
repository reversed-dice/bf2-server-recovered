// FUNCTION: BF2 0x44dc70
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <deque>
#include <string.h>

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

    std::deque<StringDataBlock*> m_blocks;   // +8
    char pad2[8];
    StringDataBlock* m_currentBlock;         // +0x60

    bool enqueueString(int chan, int type, int a, const std::string& str, int b, int c);
};

bool StringManager::enqueueString(int chan, int type, int a, const std::string& str, int b, int c)
{
    if (str.size() == 0)
        return false;
    StringDataBlock* block = new StringDataBlock();
    block->m_id = (unsigned char)(str.size() + 12);
    block->m_buffer = new char[block->m_id];
    block->m_active = 0;
    block->m_end = block->m_buffer + str.size();
    *(int*)(block->m_end) = chan;
    *(int*)(block->m_end + 4) = type;
    if (a == -1)
        block->m_end[8] = 0;
    else
        block->m_end[8] = (char)a;
    block->m_end[9] = (char)b;
    block->m_end[10] = (char)c;
    memcpy(block->m_buffer, str.data(), str.size());
    m_blocks.push_back(block);
    return true;
}

} }
