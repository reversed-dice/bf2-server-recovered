// FUNCTION: BF2 0x4092c0
namespace dice {
namespace hfe {
namespace memory {

struct ChunkMemoryPool {
    int m_field_00;
    char pad_04[0x0C];
    void* m_field_10;
    void* m_field_18;
    void* m_field_20;
    void* m_field_28;
    char pad_30[0x08];
    int m_field_38;
    unsigned char m_field_3C;
    char pad_3D[0x03];
    void* m_field_40;
};

void memoryError(bool, const char*);

struct ChunkPools {
    struct PoolHolder {
        void* m_field_00;
        void* m_field_08;
        ChunkMemoryPool* m_pools[0x200];

        void addFreePoolLink(ChunkMemoryPool* pool);
    };

    static PoolHolder** m_poolLookup;

    static void internalAddNewPool(unsigned long index, unsigned int poolType, ChunkMemoryPool* pool);
};

void ChunkPools::internalAddNewPool(unsigned long index, unsigned int poolType, ChunkMemoryPool* pool)
{
    register PoolHolder* holder = m_poolLookup[index];

    if (poolType > 0x1FF) {
        memoryError(false, "memory.dll: setInternalPoolByIndex() fails, should not come here");
        return;
    }

    holder->m_pools[(long)(int)poolType] = pool;
    holder->addFreePoolLink(pool);
}

} // namespace memory
} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_memory_ChunkPools_internalAddNewPool_unsigned_long_int_dice_hfe_memory_ChunkMemoryPoolptr::dice_hfe_memory_ChunkPools_internalAddNewPool_unsigned_long_int_dice_hfe_memory_ChunkMemoryPoolptr (0x4092c0)