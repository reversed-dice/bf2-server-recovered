// FUNCTION: BF2 0x569830
namespace dice { namespace hfe { namespace world {

class TurnableRemoteControlledObject {
public:
    int getRef();
};

int TurnableRemoteControlledObject::getRef() {
    return *(int*)((char*)this + 0x260);
}

} } }
