// FUNCTION: BF2 0x408fa0
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

struct ChunkPools {
    struct PoolHolder {
        void* m_field_00;   // 0x00
        void* m_field_08;   // 0x08

        void addFreePoolLink(ChunkMemoryPool* pool);
    };
};

void ChunkPools::PoolHolder::addFreePoolLink(ChunkMemoryPool* pool)
{
    if (pool->m_field_3C == 0) {
        pool->m_field_3C = 1;
        pool->m_field_40 = m_field_08;
        m_field_08 = pool;
    }
}

}
}
}
// REVERSED_FUNCTION: dice_hfe_memory_ChunkPools_PoolHolder_addFreePoolLink_dice_hfe_memory_ChunkMemoryPoolptr::dice_hfe_memory_ChunkPools_PoolHolder_addFreePoolLink_dice_hfe_memory_ChunkMemoryPoolptr (0x408fa0)