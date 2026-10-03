// FUNCTION: BF2 0x409170
namespace dice { namespace hfe { namespace memory {
extern int ChunkPools_m_uniquePoolCount;
bool ChunkPools_isActive() {
    return ChunkPools_m_uniquePoolCount > 0;
}
} }
}

// REVERSED_FUNCTION: dice_hfe_memory_ChunkPools_isActive (0x409170)
