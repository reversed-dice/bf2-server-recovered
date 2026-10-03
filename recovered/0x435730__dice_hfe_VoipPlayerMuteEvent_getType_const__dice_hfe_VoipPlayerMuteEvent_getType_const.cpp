// FUNCTION: BF2 0x435730
// Reconstructed from binary at 0x435730
// Namespace style compatible with older GCC (nested namespaces).
namespace dice { namespace hfe {

class VoipPlayerMuteEvent {
public:
    // Return type is 64-bit on x86_64 (matches undefined8 in decompile).
    unsigned long getType() const;
};

} } // namespace dice::hfe

// Definition outside namespace to ensure symbol exactly matches mangled member name.
unsigned long dice::hfe::VoipPlayerMuteEvent::getType() const
{
    return 0x26UL;
}