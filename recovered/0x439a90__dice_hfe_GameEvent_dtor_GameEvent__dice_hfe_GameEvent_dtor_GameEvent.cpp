// FUNCTION: BF2 0x439a90
// Reversed from BF2 server (address 0x439a90)

namespace dice {
namespace hfe {

// Placeholder for the original class layout.
// Only the first 8‑byte field is needed for this destructor.
struct GameEvent {
    // ... other members not required for this function
};

// The original binary uses a plain C linkage name:
//   dice_hfe_GameEvent_dtor_GameEvent
extern "C"
void dice_hfe_GameEvent_dtor_GameEvent(GameEvent* thisPtr) {
    // Store constant vtable (or similar) identifier.
    *reinterpret_cast<unsigned long long*>(thisPtr) = 0xb2f0b0ULL;
}

} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_GameEvent_dtor_GameEvent::dice_hfe_GameEvent_dtor_GameEvent (0x439a90)