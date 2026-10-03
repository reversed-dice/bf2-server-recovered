// FUNCTION: BF2 0x5e12c0
namespace dice { namespace hfe {

class TargetObjectNetworkable {
public:
    unsigned int getRef() const;
};

unsigned int TargetObjectNetworkable::getRef() const {
    // offset 0x70 — RefCount or similar
    return *(unsigned int*)((char*)this + 0x70);
}

} }
// REVERSED_FUNCTION: dice_hfe_TargetObjectNetworkable_getRef (0x5e12c0)