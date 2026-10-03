// FUNCTION: BF2 0x5850e0
namespace dice { namespace hfe { namespace world {

class OverheadCameraTemplate {
public:
    int getRef();
};

int OverheadCameraTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
