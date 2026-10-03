// FUNCTION: BF2 0x422550
namespace dice {
namespace hfe {

class ConnectionTypeEvent {
public:
    unsigned int getType() const;
};

unsigned int ConnectionTypeEvent::getType() const {
    return 3;
}

} // namespace hfe
} // namespace dice