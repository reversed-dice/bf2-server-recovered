// FUNCTION: BF2 0x513c90
namespace dice { namespace hfe { namespace world {

class ControlPoint {
public:
    int getRef();
};

int ControlPoint::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
