// FUNCTION: BF2 0x41f7c0
namespace dice {
namespace hfe {

class BeginRoundEvent {
public:
    unsigned int getType() const;
};

unsigned int BeginRoundEvent::getType() const {
    return 0x38;
}

} // namespace hfe
} // namespace dice