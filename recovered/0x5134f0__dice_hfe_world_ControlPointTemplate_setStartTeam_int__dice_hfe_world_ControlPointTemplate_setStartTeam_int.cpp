// FUNCTION: BF2 0x5134f0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    void setStartTeam(unsigned int);
};

void ControlPointTemplate::setStartTeam(unsigned int value) {
    *(unsigned int*)((char*)this + 0x208) = value;
}

} } }
