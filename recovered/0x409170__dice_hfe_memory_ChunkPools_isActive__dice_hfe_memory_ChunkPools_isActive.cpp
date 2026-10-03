// FUNCTION: BF2 0x409170
namespace dice {
namespace hfe {
namespace memory {

struct ChunkPools {
    struct PoolHolder {
        void* m_field_00;
        void* m_field_08;
    };

    static int m_uniquePoolCount;

    static bool isActive();
};

int ChunkPools::m_uniquePoolCount;

bool ChunkPools::isActive()
{
    return 0 < m_uniquePoolCount;
}

}
}
}
// REVERSED_FUNCTION: dice_hfe_memory_ChunkPools_isActive::dice_hfe_memory_ChunkPools_isActive (0x409170)