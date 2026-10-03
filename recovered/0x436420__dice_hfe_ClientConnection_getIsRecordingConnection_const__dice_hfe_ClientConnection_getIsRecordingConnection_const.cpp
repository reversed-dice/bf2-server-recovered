// FUNCTION: BF2 0x436420
// Reconstructed from: dice_hfe_ClientConnection_getIsRecordingConnection_const @ 0x436420
// Purpose: return 0 (undefined8). Mark noinline to ensure compiler emits function body
namespace dice {
namespace hfe {

class ClientConnection {
public:
    // Original prototype returns 8-byte value (undefined8). Keep 64-bit return.
    unsigned long long getIsRecordingConnection() const;
};

// Prevent inlining so compiler emits function with a clear XOR/RET sequence.
__attribute__((noinline))
unsigned long long ClientConnection::getIsRecordingConnection() const {
    // Return zero. Compiler will emit XOR EAX,EAX followed by RET for x86_64.
    return 0ULL;
}

} // namespace hfe
} // namespace dice