// FUNCTION: BF2 0x431530
namespace dice { namespace hfe {

class StickyProjectileEvent {
public:
    unsigned int getType() const;
};

unsigned int StickyProjectileEvent::getType() const {
    return 0x20;
}

} }
