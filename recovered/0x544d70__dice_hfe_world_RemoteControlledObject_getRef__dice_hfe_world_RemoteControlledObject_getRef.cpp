// FUNCTION: BF2 0x544d70
namespace dice { namespace hfe { namespace world {

class RemoteControlledObject {
public:
    int getRef();
};

int RemoteControlledObject::getRef() {
    return *(int*)((char*)this + 0x238);
}

} } }
