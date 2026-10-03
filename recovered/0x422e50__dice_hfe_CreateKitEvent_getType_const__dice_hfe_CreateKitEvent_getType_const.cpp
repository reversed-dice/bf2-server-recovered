// FUNCTION: BF2 0x422e50
namespace dice {
namespace hfe {

class CreateKitEvent {
public:
    unsigned int getType() const;
};

unsigned int CreateKitEvent::getType() const {
    return 0x1f;
}

} // namespace hfe
} // namespace dice