// FUNCTION: BF2 0x408810
#include <stdio.h>

namespace dice {
namespace hfe {
namespace memory {

class AllocInfoManager {
public:
    static const char* report();
    static void reportToFile(const char* filename);
};

void AllocInfoManager::reportToFile(const char* filename)
{
    const char* s = report();
    FILE* stream = fopen(filename, "wt");
    if (stream) {
        fputs(s, stream);
        fclose(stream);
    }
}

} // namespace memory
} // namespace hfe
} // namespace dice