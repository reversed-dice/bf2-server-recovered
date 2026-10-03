// FUNCTION: BF2 0x4097f0
namespace dice {
namespace hfe {
namespace memory {

struct MemoryModuleInfo {
    char _pad[0x4c];
    int  m_allocCount;     // 0x4c
    int  m_allocatedSize;  // 0x50
};

void MemoryModuleInfo_free_int(MemoryModuleInfo* self, int param_2)
{
    self->m_allocCount = self->m_allocCount + -1;
    self->m_allocatedSize = self->m_allocatedSize - param_2;
}

}
}
}