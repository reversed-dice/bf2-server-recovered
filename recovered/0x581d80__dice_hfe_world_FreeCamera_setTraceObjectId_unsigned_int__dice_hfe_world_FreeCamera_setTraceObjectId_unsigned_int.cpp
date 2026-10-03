// FUNCTION: BF2 0x581d80
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    void setTraceObjectId(unsigned int);
};

void FreeCamera::setTraceObjectId(unsigned int value) {
    *(unsigned int*)((char*)this + 0x37c) = value;
}

} } }
