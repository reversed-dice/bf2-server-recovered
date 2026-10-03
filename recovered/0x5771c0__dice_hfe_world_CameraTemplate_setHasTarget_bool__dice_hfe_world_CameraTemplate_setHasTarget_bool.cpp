// FUNCTION: BF2 0x5771c0
namespace dice { namespace hfe { namespace world {

class CameraTemplate {
public:
    void setHasTarget(unsigned char);
};

void CameraTemplate::setHasTarget(unsigned char value) {
    *(unsigned char*)((char*)this + 0x290) = value;
}

} } }
