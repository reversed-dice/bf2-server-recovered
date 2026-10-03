// FUNCTION: BF2 0x5ccb60
namespace dice { namespace hfe {

class FreeCameraNetworkable {
public:
    int getRef();
};

int FreeCameraNetworkable::getRef() {
    return *(int*)((char*)this + 0x70);
}

} }
