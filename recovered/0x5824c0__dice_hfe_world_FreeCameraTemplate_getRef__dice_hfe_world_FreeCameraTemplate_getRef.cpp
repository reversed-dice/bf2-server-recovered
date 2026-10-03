// FUNCTION: BF2 0x5824c0
namespace dice { namespace hfe { namespace world {

class FreeCameraTemplate {
public:
    int getRef();
};

int FreeCameraTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
