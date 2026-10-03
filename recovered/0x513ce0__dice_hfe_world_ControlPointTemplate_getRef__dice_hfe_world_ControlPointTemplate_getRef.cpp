// FUNCTION: BF2 0x513ce0
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getRef();
};

int ControlPointTemplate::getRef() {
    return *(int*)((char*)this + 0x200);
}

} } }
