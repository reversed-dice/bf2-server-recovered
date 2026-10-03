// FUNCTION: BF2 0x434290
// Minimal class + out-of-line method to force simple MOV EAX,0x2A; RET codegen.
// Placed in dice::hfe namespace to match project naming.
namespace dice {
namespace hfe {

class UnlockEvent {
public:
    // Non-inline out-of-line definition below ensures a real symbol is emitted.
    unsigned long long getType() const;
};

} // namespace hfe
} // namespace dice

// Out-of-line definition. Mark used/noinline to prevent inlining or removal.
// Compiler will emit: MOV EAX,0x2A; RET
unsigned long long __attribute__((noinline, used))
dice::hfe::UnlockEvent::getType() const
{
    return 0x2a;
}