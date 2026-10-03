// FUNCTION: BF2 0x521560
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getControlsCategory() const;
};

int PlayerControlObjectTemplate::getControlsCategory() const {
    return *(int*)((char*)this + 0x308);
}

} } }
