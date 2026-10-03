// FUNCTION: BF2 0x4f4ab0
namespace dice { namespace hfe {

class DemoSpectatorCamera {
public:
    void setPlaybackMode(unsigned char);
};

void DemoSpectatorCamera::setPlaybackMode(unsigned char value) {
    *(unsigned char*)((char*)this + 0x24) = value;
}

} }
