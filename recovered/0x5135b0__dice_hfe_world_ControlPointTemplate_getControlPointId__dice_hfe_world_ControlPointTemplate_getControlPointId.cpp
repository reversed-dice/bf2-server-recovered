// FUNCTION: BF2 0x5135b0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getControlPointId();
};

int ControlPointTemplate::getControlPointId() {
    return *(int*)((char*)this + 0x218);
}

} } }
