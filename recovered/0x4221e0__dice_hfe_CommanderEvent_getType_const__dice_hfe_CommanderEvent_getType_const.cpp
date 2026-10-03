// FUNCTION: BF2 0x4221e0
namespace dice {
namespace hfe {

class CommanderEvent {
public:
    unsigned int getType() const;
};

unsigned int CommanderEvent::getType() const {
    return 0x13;
}

} // namespace hfe
} // namespace dice