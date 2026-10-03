// FUNCTION: BF2 0x5139b0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getGroupId();
};

int ControlPointTemplate::getGroupId() {
    return *(int*)((char*)this + 0x248);
}

} } }
