// FUNCTION: BF2 0x521f50
namespace dice { namespace hfe { namespace world {

class GrapplingHookRopeContainerTemplate {
public:
    int getRef();
};

int GrapplingHookRopeContainerTemplate::getRef() {
    return *(int*)((char*)this + 0x3d4);
}

} } }
