// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4092b0
namespace dice { namespace hfe { namespace memory {

class ChunkMemoryPool {
public:
    char _pad0[0x28];
    void* m_head;
    int m_count;
    void directFree(void* p);
};

void ChunkMemoryPool::directFree(void* p)
{
	*(void**)p = m_head;
	m_count--;
	m_head = p;
}

} } }
