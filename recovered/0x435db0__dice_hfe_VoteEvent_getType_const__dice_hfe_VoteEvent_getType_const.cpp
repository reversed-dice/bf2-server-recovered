// FUNCTION: BF2 0x435db0
// Reconstructed from bf2_l64.x86 at 0x435db0
// Namespace pattern: dice::hfe
// Simple const accessor for VoteEvent type id.

#include <stdint.h>

namespace dice {
namespace hfe {

class VoteEvent {
public:
    // const method returning event type id
    uint64_t getType() const;
};

} // namespace hfe
} // namespace dice

// Definition using fully-qualified name to match symbol exactly.
uint64_t dice::hfe::VoteEvent::getType() const
{
    return (uint64_t)0x27;
}