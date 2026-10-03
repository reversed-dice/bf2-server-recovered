// FUNCTION: BF2 0x40a600
namespace dice {
namespace hfe {
namespace memory {

struct TraceInfo {
    char _pad[0x10c];
    int  m_allocCount;     // 0x10c
    int  m_allocatedSize;  // 0x110
};

class TraceInfoManager {
public:
    static TraceInfo* s_traceInfos[];
    static void free_int_int(int, int);
};

void TraceInfoManager::free_int_int(int param_1, int param_2)
{
    if (0 < param_1) {
        TraceInfo* info = s_traceInfos[param_1];
        info->m_allocCount = info->m_allocCount + -1;
        info->m_allocatedSize = info->m_allocatedSize - param_2;
        return;
    }
}

} // namespace memory
} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager_free_int_int::dice_hfe_memory_TraceInfoManager_free_int_int (0x40a600)