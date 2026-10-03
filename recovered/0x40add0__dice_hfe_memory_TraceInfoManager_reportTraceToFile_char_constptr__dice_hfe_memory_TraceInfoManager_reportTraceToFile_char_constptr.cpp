// FUNCTION: BF2 0x40add0
#include <stdio.h>

namespace dice { namespace hfe { namespace memory {

struct TraceInfoManager {
    static char* reportTrace();
    static void reportTraceToFile(char const*);
};

void TraceInfoManager::reportTraceToFile(char const* filename) {
    char* trace = reportTrace();
    FILE* f = fopen(filename, (char const*)0xb26abe);
    if (f != 0) {
        fputs(trace, f);
        return (void)fclose(f);
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_memory_TraceInfoManager_reportTraceToFile_char_constptr (0x40add0)