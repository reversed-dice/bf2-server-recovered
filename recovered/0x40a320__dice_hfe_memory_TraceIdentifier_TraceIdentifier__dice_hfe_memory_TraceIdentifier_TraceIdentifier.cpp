// FUNCTION: BF2 0x40a320
#include <string.h>

namespace dice {
namespace hfe {
namespace memory {

extern const char* dice_hfe_memory_nameNotSet;

struct TraceIdentifier {
    char m_name[0x11c];   // 0x00
};

void dice_hfe_memory_TraceIdentifier_TraceIdentifier(TraceIdentifier* self)
{
    memset(self, 0, 0x11c);
    strcpy(self->m_name, dice_hfe_memory_nameNotSet);
}

}
}
}

// REVERSED_FUNCTION: dice_hfe_memory_TraceIdentifier_TraceIdentifier::dice_hfe_memory_TraceIdentifier_TraceIdentifier (0x40a320)