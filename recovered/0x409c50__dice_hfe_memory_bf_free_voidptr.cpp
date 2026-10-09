// FUNCTION: BF2 0x409c50
#include <stdio.h>
#include <stdlib.h>

namespace {
unsigned int get_current_thread_id();
extern unsigned int mainThreadId;
}

namespace dice { namespace hfe { namespace memory {

extern bool memoryError_useNormalAllocations;
void memoryError(bool fatal, const char* msg);

class ChunkPools {
public:
    static bool free(void* p, unsigned long size, int index);
};

struct BlockHeader {
    unsigned int normal : 1;
    unsigned int chunk : 1;
    unsigned int size : 15;
    unsigned int pool : 15;
};

void bf_free(void* p)
{
    char buf[128];
    if (!memoryError_useNormalAllocations) {
        if (p != 0) {
            BlockHeader* h = (BlockHeader*)p - 1;
            if (h->chunk) {
                unsigned int tid = get_current_thread_id();
                if (tid != mainThreadId) {
                    sprintf(buf, "memory.dll: thread %d is deallocating main thread memory", tid);
                    memoryError(false, buf);
                }
                if (!ChunkPools::free(h, h->size, h->pool)) {
                    sprintf(buf, "memory.dll: ChunkPools::free fails at memory 0x%lx", h);
                    memoryError(false, buf);
                    ::free(h);
                }
            } else {
                ::free(h);
            }
        }
    }
}

} } }
