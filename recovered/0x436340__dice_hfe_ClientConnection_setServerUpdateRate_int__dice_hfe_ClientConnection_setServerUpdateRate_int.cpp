// FUNCTION: BF2 0x436340
// Reconstructed from decompile at 0x436340
// Namespace pattern: dice::hfe
#include <stddef.h>
#include <stdint.h>

namespace dice { namespace hfe {

class ClientConnection {
    // Padding up to offset 0x190 (400) where original code stores the 4-byte value.
    // This maps the raw offset used in the decompile to a named member.
    char _reserved[0x190];
public:
    int32_t m_serverUpdateRate; // at offset 0x190

    // Setter that writes the 32-bit server update rate into the member at offset 0x190.
    void setServerUpdateRate(int32_t rate);
};

void ClientConnection::setServerUpdateRate(int32_t rate)
{
    // Exact semantics from decompile: write 32-bit value at (this + 0x190)
    this->m_serverUpdateRate = rate;
}

} } // namespace dice::hfe