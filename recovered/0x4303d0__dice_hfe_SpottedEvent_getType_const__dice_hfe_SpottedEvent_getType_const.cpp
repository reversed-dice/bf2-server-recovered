// FUNCTION: BF2 0x4303d0
namespace dice {
namespace hfe {

class SpottedEvent {
public:
    unsigned int getType() const;
};

unsigned int SpottedEvent::getType() const {
    return 0x1d;
}

} // namespace hfe
} // namespace dice