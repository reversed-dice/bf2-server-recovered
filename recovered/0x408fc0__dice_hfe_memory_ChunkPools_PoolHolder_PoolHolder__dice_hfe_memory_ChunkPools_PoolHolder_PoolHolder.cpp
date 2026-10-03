// FUNCTION: BF2 0x408fc0
namespace dice {
namespace hfe {
namespace memory {

struct ChunkPools {
    struct PoolHolder {
        void* m_field_00;   // 0x00
        void* m_field_08;   // 0x08
    };
};

void dice_hfe_memory_ChunkPools_PoolHolder_PoolHolder(ChunkPools::PoolHolder* self)
{
    self->m_field_08 = 0;
}

}
}
}
// REVERSED_FUNCTION: dice_hfe_memory_ChunkPools_PoolHolder_PoolHolder::dice_hfe_memory_ChunkPools_PoolHolder_PoolHolder (0x408fc0)