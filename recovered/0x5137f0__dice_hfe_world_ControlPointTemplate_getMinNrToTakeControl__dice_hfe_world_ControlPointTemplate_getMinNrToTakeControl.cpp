// FUNCTION: BF2 0x5137f0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getMinNrToTakeControl();
};

int ControlPointTemplate::getMinNrToTakeControl() {
    return *(int*)((char*)this + 0x22c);
}

} } }
