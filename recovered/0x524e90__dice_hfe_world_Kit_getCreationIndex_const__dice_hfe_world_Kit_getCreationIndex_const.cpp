// FUNCTION: BF2 0x524e90
namespace dice { namespace hfe { namespace world {

class Kit {
public:
    unsigned int getCreationIndex() const;
};

unsigned int Kit::getCreationIndex() const {
    return *(unsigned int*)(*(unsigned long*)((unsigned char*)this + 0x2d8) + 0x228);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Kit_getCreationIndex_const (0x524e90)