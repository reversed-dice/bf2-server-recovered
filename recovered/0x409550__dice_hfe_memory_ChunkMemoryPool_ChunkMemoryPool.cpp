// FUNCTION: BF2 0x409550
namespace dice {
namespace hfe {
namespace memory {

struct ChunkMemoryPool {
    int m_field_00;            // 0x00
    char pad_04[0x0C];         // 0x04
    void* m_field_10;          // 0x10
    void* m_field_18;          // 0x18
    void* m_field_20;          // 0x20
    void* m_field_28;          // 0x28
    char pad_30[0x08];         // 0x30
    int m_field_38;            // 0x38
    unsigned char m_field_3C;  // 0x3C
    char pad_3D[0x03];         // 0x3D
    void* m_field_40;          // 0x40
};

void dice_hfe_memory_ChunkMemoryPool_ChunkMemoryPool(ChunkMemoryPool* self)
{
    self->m_field_00 = 0;
    self->m_field_10 = 0;
    self->m_field_18 = 0;
    self->m_field_20 = 0;
    self->m_field_28 = 0;
    self->m_field_38 = 0;
    self->m_field_3C = 0;
    self->m_field_40 = 0;
}

}
}
}
// REVERSED_FUNCTION: dice_hfe_memory_ChunkMemoryPool_ChunkMemoryPool::dice_hfe_memory_ChunkMemoryPool_ChunkMemoryPool (0x409010)
// REVERSED_FUNCTION: dice_hfe_memory_ChunkMemoryPool_ChunkMemoryPool (0x409550)
