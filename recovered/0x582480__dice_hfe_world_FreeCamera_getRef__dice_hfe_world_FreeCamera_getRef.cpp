// FUNCTION: BF2 0x582480
namespace dice { namespace hfe { namespace world {

class FreeCamera {
public:
    int getRef();
};

int FreeCamera::getRef() {
    return *(int*)((char*)this + 0x250);
}

} } }
