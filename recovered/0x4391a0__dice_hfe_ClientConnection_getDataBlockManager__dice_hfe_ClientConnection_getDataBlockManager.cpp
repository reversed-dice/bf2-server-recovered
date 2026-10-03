// FUNCTION: BF2 0x4391a0
// Reconstructed minimal types + accessor for: dice_hfe_ClientConnection_getDataBlockManager @ 0x4391a0
#include <stddef.h> // offsetof
#include <stdint.h>

namespace dice { namespace hfe {

// Forward declare DataBlockManager (unknown layout).
class DataBlockManager;

// Minimal ClientConnection layout to match binary offsets.
// Only field required for this accessor is declared.
class ClientConnection {
public:
    uint8_t _pad[0x50];                 // bytes [0x0 .. 0x4F]
    DataBlockManager* m_dataBlockManager; // offset 0x50
};

} } // namespace dice::hfe

// Compile-time check for offset (negative-size array fails compile if wrong).
typedef char STATIC_ASSERT_m_dataBlockManager_offset[
    (offsetof(dice::hfe::ClientConnection, m_dataBlockManager) == 0x50) ? 1 : -1
];

// C linkage free function matching original export.
// Matches decompile: return *(undefined8 *)(param_1 + 0x50);
extern "C" dice::hfe::DataBlockManager* dice_hfe_ClientConnection_getDataBlockManager(dice::hfe::ClientConnection* param_1)
{
    return param_1->m_dataBlockManager;
}