// FUNCTION: BF2 0x536cc0
namespace dice { namespace hfe { namespace world {

class PlayerControlObject {
public:
    unsigned int getArtPos() const;
};

unsigned int PlayerControlObject::getArtPos() const {
    return *(unsigned char*)(*(long*)((char*)this + 0x28) + 0x314);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObject_getArtPos (0x536cc0)