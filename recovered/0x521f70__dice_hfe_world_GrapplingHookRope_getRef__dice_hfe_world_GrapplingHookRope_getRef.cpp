// FUNCTION: BF2 0x521f70
namespace dice { namespace hfe { namespace world {

class GrapplingHookRope {
public:
    int getRef();
};

int GrapplingHookRope::getRef() {
    return *(int*)((char*)this + 0x22c);
}

} } }
