// FUNCTION: BF2 0x40ada0
namespace dice { namespace hfe { namespace memory {

class TraceIdentifier;

class TraceInfoManager {
public:
    static const char* internal_report(TraceIdentifier**, int);
    const char* reportTrace();
};

const char* TraceInfoManager::reportTrace() {
    const char* result = internal_report(reinterpret_cast<TraceIdentifier**>(0xf85540), *reinterpret_cast<unsigned int*>(0xf85520));
    return result ? result : "no traces found";
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager_reportTrace (0x40ada0)