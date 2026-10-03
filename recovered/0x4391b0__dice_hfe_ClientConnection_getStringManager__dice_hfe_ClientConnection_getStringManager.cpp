// FUNCTION: BF2 0x4391b0
// Reconstructed minimal types + accessor for: dice_hfe_ClientConnection_getStringManager @ 0x4391b0
#include <stddef.h> // offsetof
#include <stdint.h>

namespace dice { namespace hfe {

// Forward declare StringManager (unknown layout).
class StringManager;

// Minimal ClientConnection layout to match binary offsets.
// Only field required for this accessor is declared.
class ClientConnection {
public:
    uint8_t _pad[0x48];                 // bytes [0x0 .. 0x47]
    StringManager* m_stringManager;     // offset 0x48
};

} } // namespace dice::hfe

// Compile-time check for offset (negative-size array fails compile if wrong).
typedef char STATIC_ASSERT_m_stringManager_offset[
    (offsetof(dice::hfe::ClientConnection, m_stringManager) == 0x48) ? 1 : -1
];

// C linkage free function matching original export.
// Matches decompile: return *(undefined8 *)(param_1 + 0x48);
extern "C" dice::hfe::StringManager* dice_hfe_ClientConnection_getStringManager(dice::hfe::ClientConnection* param_1)
{
    return param_1->m_stringManager;
}