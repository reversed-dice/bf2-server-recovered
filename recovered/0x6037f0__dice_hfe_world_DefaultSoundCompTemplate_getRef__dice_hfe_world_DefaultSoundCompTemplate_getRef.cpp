// FUNCTION: BF2 0x6037f0
namespace dice { namespace hfe { namespace world {

class DefaultSoundCompTemplate {
public:
    unsigned int getRef() const;
};

unsigned int DefaultSoundCompTemplate::getRef() const {
    return *(unsigned int*)((char*)this + 0x10);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultSoundCompTemplate_getRef (0x6037f0)