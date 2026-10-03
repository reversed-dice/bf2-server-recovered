// FUNCTION: BF2 0x528aa0
namespace dice { namespace hfe { namespace world {

class KitPart {
public:
    unsigned int getKitPartIndex() const;
};

unsigned int KitPart::getKitPartIndex() const {
    return *(unsigned int*)((char*)(*(void**)((char*)this + 0x248)) + 0x228);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_KitPart_getKitPartIndex (0x528aa0)