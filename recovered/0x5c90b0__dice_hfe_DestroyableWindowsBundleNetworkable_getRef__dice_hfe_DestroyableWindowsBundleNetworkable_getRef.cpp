// FUNCTION: BF2 0x5c90b0
namespace dice { namespace hfe {

class DestroyableWindowsBundleNetworkable {
public:
    int getRef();
};

int DestroyableWindowsBundleNetworkable::getRef() {
    return *(int*)((char*)this + 0x70);
}

} }
