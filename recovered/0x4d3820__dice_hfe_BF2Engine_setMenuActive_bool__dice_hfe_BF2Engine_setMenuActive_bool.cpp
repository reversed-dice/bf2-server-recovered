// FUNCTION: BF2 0x4d3820
namespace dice { namespace hfe {

class BF2Engine {
public:
    void setMenuActive(unsigned char);
};

void BF2Engine::setMenuActive(unsigned char value) {
    *(unsigned char*)((char*)this + 0x98) = value;
}

} }
