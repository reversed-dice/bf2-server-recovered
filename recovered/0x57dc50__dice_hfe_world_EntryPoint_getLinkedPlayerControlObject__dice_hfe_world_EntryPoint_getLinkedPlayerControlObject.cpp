// FUNCTION: BF2 0x57dc50
namespace dice { namespace hfe { namespace world {

class EntryPoint {
public:
    void* getLinkedPlayerControlObject() const;
};

void* EntryPoint::getLinkedPlayerControlObject() const {
    return *(void**)((char*)this + 0x240);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_EntryPoint_getLinkedPlayerControlObject (0x57dc50)