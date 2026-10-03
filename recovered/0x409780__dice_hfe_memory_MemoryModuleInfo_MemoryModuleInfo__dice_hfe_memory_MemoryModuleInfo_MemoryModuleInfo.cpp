// FUNCTION: BF2 0x409780
#include <string.h>

namespace dice {
namespace hfe {
namespace memory {

struct MemoryModuleInfo {
    char _pad[0x4c];       // 0x00
    int  m_allocCount;     // 0x4c
    int  m_allocatedSize;  // 0x50
    char _pad_54[0x08];    // 0x54
};

void MemoryModuleInfo_MemoryModuleInfo(MemoryModuleInfo* self)
{
    memset(self, 0, 0x5c);
}

}
}
}