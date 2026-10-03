// FUNCTION: BF2 0x584bb0
namespace dice { namespace hfe { namespace world {

class OverheadCamera {
public:
    int getCameraId();
};

int OverheadCamera::getCameraId() {
    return *(int*)((char*)this + 0x288);
}

} } }
