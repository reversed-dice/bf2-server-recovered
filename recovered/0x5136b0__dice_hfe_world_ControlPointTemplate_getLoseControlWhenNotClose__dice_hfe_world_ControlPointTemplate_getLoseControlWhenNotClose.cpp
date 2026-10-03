// FUNCTION: BF2 0x5136b0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char getLoseControlWhenNotClose();
};

unsigned char ControlPointTemplate::getLoseControlWhenNotClose() {
    return *(unsigned char*)((char*)this + 0x227);
}

} } }
