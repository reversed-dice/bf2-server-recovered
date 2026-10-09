// FUNCTION: BF2 0x73f7c0
namespace dice { namespace hfe {
class MemoryPool {
public:
    void init(int blockSize, int count, bool flag);
private:
    int m_pad0[3];
    int m_blockSize;
    int m_count;
    char m_flag;
    char m_pad1[0x38 - 0x15];
    int m_zero;
    int m_numBlocks;
};
void MemoryPool::init(int blockSize, int count, bool flag)
{
    int align = blockSize & 3;
    int base = blockSize & ~3;
    int size = base + (align ? 8 : 0);
    m_count = count;
    m_flag = flag;
    m_zero = 0;
    m_blockSize = size;
    m_numBlocks = count / size;
}
} }
