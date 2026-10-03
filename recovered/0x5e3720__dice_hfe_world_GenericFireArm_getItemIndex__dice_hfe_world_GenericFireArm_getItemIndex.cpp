// FUNCTION: BF2 0x5e3720
namespace dice { namespace hfe { namespace world {

class GenericFireArm {
public:
    unsigned int getItemIndex() const;
};

unsigned int GenericFireArm::getItemIndex() const {
    return *(unsigned int*)(*(char**)((char*)this + 0x330) + 0x248);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArm_getItemIndex (0x5e3720)