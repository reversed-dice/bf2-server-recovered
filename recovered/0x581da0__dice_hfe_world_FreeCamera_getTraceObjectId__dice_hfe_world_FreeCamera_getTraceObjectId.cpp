// FUNCTION: BF2 0x581da0
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    int getTraceObjectId();
};

int FreeCamera::getTraceObjectId() {
    return *(int*)((char*)this + 0x37c);
}

} } }
