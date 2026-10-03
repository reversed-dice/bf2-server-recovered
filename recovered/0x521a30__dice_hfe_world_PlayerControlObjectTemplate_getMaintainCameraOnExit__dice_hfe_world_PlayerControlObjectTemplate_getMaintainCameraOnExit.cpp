// FUNCTION: BF2 0x521a30
namespace dice { namespace hfe { namespace world {

class PlayerControlObjectTemplate {
public:
    unsigned char getMaintainCameraOnExit();
};

unsigned char PlayerControlObjectTemplate::getMaintainCameraOnExit() {
    return *(unsigned char*)((char*)this + 0x3cc);
}

} } }
