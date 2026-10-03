// FUNCTION: BF2 0x513970
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getSignalTriggerId() const;
};

int ControlPointTemplate::getSignalTriggerId() const {
    return *(int*)((char*)this + 0x2b8);
}

} } }
