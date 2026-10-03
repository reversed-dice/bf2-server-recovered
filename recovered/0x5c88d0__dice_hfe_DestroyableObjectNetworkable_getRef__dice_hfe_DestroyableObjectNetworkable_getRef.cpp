// FUNCTION: BF2 0x5c88d0
namespace dice { namespace hfe {

class DestroyableObjectNetworkable {
public:
    int getRef();
};

int DestroyableObjectNetworkable::getRef() {
    return *(int*)((char*)this + 0x70);
}

} }
