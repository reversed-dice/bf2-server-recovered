// FUNCTION: BF2 0x584b50
namespace dice { namespace hfe { namespace world {

class OverheadCamera {
public:
    unsigned char isActive() const;
};

unsigned char OverheadCamera::isActive() const {
    return *(unsigned char*)((char*)this + 0x290);
}

} } }
