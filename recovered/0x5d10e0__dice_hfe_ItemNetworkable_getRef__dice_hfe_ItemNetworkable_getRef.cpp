// FUNCTION: BF2 0x5d10e0
namespace dice { namespace hfe {

class ItemNetworkable {
public:
    unsigned int getRef() const;
};

unsigned int ItemNetworkable::getRef() const {
    return *(unsigned int*)((char*)this + 0x70);
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_ItemNetworkable_getRef (0x5d10e0)