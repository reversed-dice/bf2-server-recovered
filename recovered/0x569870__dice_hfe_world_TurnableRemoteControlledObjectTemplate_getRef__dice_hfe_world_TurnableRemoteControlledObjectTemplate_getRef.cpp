// FUNCTION: BF2 0x569870
namespace dice { namespace hfe { namespace world {

class TurnableRemoteControlledObjectTemplate {
public:
    int getRef();
};

int TurnableRemoteControlledObjectTemplate::getRef() {
    return *(int*)((char*)this + 0x218);
}

} } }
