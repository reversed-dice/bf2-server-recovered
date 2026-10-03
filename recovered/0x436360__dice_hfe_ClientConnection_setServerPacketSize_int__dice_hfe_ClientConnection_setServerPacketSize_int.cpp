// FUNCTION: BF2 0x436360
#include <stddef.h>
#include <stdint.h>

namespace dice { namespace hfe {

// Minimal ClientConnection layout to match offsets from binary.
// Only fields required to place serverPacketSize at 0x198 are declared.
class ClientConnection {
public:
    uint8_t _pad[0x198]; // bytes [0x0 .. 0x197]
    int32_t serverPacketSize; // 0x198
};

} } // namespace dice::hfe

// Compile-time check for offset (portable for old gcc): negative-size array will fail compile.
typedef char STATIC_ASSERT_serverPacketSize_offset[
    (offsetof(dice::hfe::ClientConnection, serverPacketSize) == 0x198) ? 1 : -1
];

// C linkage symbol matching original binary export.
extern "C" void dice_hfe_ClientConnection_setServerPacketSize_int(dice::hfe::ClientConnection* param_1, int32_t param_2)
{
    // Match decompile: *(undefined4 *)(param_1 + 0x198) = param_2;
    param_1->serverPacketSize = param_2;
    return;
}