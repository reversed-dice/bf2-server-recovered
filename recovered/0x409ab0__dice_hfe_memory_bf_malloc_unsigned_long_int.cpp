// FUNCTION: BF2 0x409ab0
#include <stdio.h>
#include <stdlib.h>

namespace {
unsigned int get_current_thread_id();
extern unsigned int mainThreadId;
extern unsigned long g_maxAllocSize;
}

namespace dice { namespace hfe { namespace memory {

extern bool memoryError_useNormalAllocations;
void memoryError(bool fatal, const char* msg);

class ChunkPools {
public:
    static void* allocate(unsigned long size, int& index);
};

union BlockHeader {
    struct {
        unsigned int normal : 1;
        unsigned int chunk : 1;
        unsigned int size : 15;
        unsigned int pool : 15;
    } c;
    struct {
        unsigned int normal : 1;
        unsigned int chunk : 1;
        unsigned int size : 30;
    } n;
};

void* bf_malloc(unsigned long size, int)
{
    char buf[128];
    if (memoryError_useNormalAllocations)
        return malloc(size);
    if (size == 0)
        size = 1;
    unsigned long total = size + 4;
    if (size > g_maxAllocSize) {
        sprintf(buf, "memory.dll: sanity check: block size %d (%5.2f MB) doesn't seem sane", (int)size, size / 1048576.0);
        memoryError(true, buf);
    }
    BlockHeader h;
    h.c.normal = 0;
    void* p = 0;
    if (get_current_thread_id() == mainThreadId) {
        int pool;
        h.c.chunk = 1;
        p = ChunkPools::allocate(total, pool);
        h.c.size = total;
        h.c.pool = pool;
    }
    if (!p) {
        h.n.chunk = 0;
        h.n.size = total;
        p = malloc(total);
        if (!p) {
            sprintf(buf, "memory.dll: all alloc attempts failed for size %d", (int)size);
            memoryError(false, buf);
            return 0;
        }
    }
    *(BlockHeader*)p = h;
    return (char*)p + 4;
}

} } }
