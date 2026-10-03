// FUNCTION: BF2 0x544db0
namespace dice { namespace hfe { namespace world {

class RemoteControlledObjectTemplate {
public:
    int getRef();
};

int RemoteControlledObjectTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
