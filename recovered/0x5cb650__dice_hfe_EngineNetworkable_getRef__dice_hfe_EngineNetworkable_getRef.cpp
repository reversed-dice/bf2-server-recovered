// FUNCTION: BF2 0x5cb650
namespace dice { namespace hfe {

class EngineNetworkable {
public:
    int getRef();
};

int EngineNetworkable::getRef() {
    return *(int*)((char*)this + 0x70);
}

} }
