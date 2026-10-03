// FUNCTION: BF2 0x422830
namespace dice {
namespace hfe {

class ContentCheckEvent {
public:
    unsigned int getType() const;
};

unsigned int ContentCheckEvent::getType() const {
    return 0x2e;
}

} // namespace hfe
} // namespace dice