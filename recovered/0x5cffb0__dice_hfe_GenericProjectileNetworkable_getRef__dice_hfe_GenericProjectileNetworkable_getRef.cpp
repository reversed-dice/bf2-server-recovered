// FUNCTION: BF2 0x5cffb0
namespace dice { namespace hfe {

class GenericProjectileNetworkable {
public:
    unsigned int getRef() const;
    // offset 0x70: ref
};

unsigned int GenericProjectileNetworkable::getRef() const {
    return *(const unsigned int*)((const char*)this + 0x70);
}

} }
// REVERSED_FUNCTION: dice_hfe_GenericProjectileNetworkable_getRef (0x5cffb0)