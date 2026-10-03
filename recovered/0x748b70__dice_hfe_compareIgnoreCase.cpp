// FUNCTION: BF2 0x748b70
#include <strings.h>

namespace dice::hfe {

int compareIgnoreCase(const char* s1, const char* s2)
{
    return strcasecmp(s1, s2);
}

} // namespace dice::hfe
// REVERSED_FUNCTION: dice::hfe::compareIgnoreCase (0x00748b70)
