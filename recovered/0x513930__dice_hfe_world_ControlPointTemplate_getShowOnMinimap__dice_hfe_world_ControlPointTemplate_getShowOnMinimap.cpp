// FUNCTION: BF2 0x513930
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getShowOnMinimap();
};

unsigned char ControlPointTemplate::getShowOnMinimap() {
    return *(unsigned char*)((char*)this + 0x244);
}

} } }
