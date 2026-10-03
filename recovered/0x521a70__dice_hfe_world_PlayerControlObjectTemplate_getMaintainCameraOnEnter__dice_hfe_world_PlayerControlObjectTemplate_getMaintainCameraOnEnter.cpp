// FUNCTION: BF2 0x521a70
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    unsigned char getMaintainCameraOnEnter();
};

unsigned char PlayerControlObjectTemplate::getMaintainCameraOnEnter() {
    return *(unsigned char*)((char*)this + 0x3cd);
}

} } }
