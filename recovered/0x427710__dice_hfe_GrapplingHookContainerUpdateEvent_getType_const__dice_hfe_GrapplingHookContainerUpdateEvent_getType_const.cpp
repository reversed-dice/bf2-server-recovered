// FUNCTION: BF2 0x427710
namespace dice {
namespace hfe {

class GrapplingHookContainerUpdateEvent {
public:
    unsigned int getType() const;
};

unsigned int GrapplingHookContainerUpdateEvent::getType() const {
    return 0x3d;
}

} // namespace hfe
} // namespace dice