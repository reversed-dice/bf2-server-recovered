// FUNCTION: BF2 0x6034a0
namespace dice { namespace hfe { namespace world {

class DefaultSoundComp {
public:
    unsigned int isSelectable() const;
};

unsigned int DefaultSoundComp::isSelectable() const {
    return 1;
}

} } }
