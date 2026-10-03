// FUNCTION: BF2 0x5c7890
namespace dice { namespace hfe {

class ControlPointNetworkable {
public:
    int getRef();
};

int ControlPointNetworkable::getRef() {
    return *(int*)((char*)this + 0x70);
}

} }
