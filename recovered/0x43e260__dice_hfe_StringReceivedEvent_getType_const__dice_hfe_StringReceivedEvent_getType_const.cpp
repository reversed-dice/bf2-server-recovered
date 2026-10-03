// FUNCTION: BF2 0x43e260
namespace dice { namespace hfe {

class StringReceivedEvent {
public:
    // Return event type id. Const method matches original binary.
    unsigned long long getType() const;
};

} } // namespace dice::hfe

// Definition with fully-qualified name to match symbol exactly.
unsigned long long dice::hfe::StringReceivedEvent::getType() const {
    return 0xbULL;
}