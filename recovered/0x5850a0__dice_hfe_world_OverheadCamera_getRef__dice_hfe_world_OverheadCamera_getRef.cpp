// FUNCTION: BF2 0x5850a0
namespace dice { namespace hfe { namespace world {

class OverheadCamera {
public:
    int getRef();
};

int OverheadCamera::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
