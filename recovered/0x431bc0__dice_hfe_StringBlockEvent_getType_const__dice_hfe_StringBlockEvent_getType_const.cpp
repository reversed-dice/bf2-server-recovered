// FUNCTION: BF2 0x431bc0
namespace dice { namespace hfe {

class StringBlockEvent {
public:
    unsigned int getType() const;
};

unsigned int StringBlockEvent::getType() const {
    return 0xf;
}

} }
