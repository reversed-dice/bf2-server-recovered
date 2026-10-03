// FUNCTION: BF2 0x5215e0
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    int getToolTipType();
};

int PlayerControlObjectTemplate::getToolTipType() {
    return *(int*)((char*)this + 0x310);
}

} } }
