// FUNCTION: BF2 0x4270e0
namespace dice {
namespace hfe {

class GrapplingHookContainerDetachEvent {
public:
    unsigned int getType() const;
};

unsigned int GrapplingHookContainerDetachEvent::getType() const {
    return 0x3e;
}

} // namespace hfe
} // namespace dice