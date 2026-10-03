// FUNCTION: BF2 0x435990
// Reconstructed: returns constant event type 0x36
namespace dice { namespace hfe {

class VoipSessionEvent {
public:
    // Return event type identifier for VoipSessionEvent.
    unsigned long long getType() const;
};

} } // namespace dice::hfe

unsigned long long dice::hfe::VoipSessionEvent::getType() const
{
    return 0x36ULL;
}