// FUNCTION: BF2 0x584cb0
namespace dice { namespace hfe { namespace world {

class OverheadCamera {
public:
    int getTraceObjectId();
};

int OverheadCamera::getTraceObjectId() {
    return *(int*)((char*)this + 0x33c);
}

} } }
