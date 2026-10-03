// FUNCTION: BF2 0x521fe0
namespace dice { namespace hfe { namespace world {

class GrapplingHookRopeContainer {
public:
    int getRef();
};

int GrapplingHookRopeContainer::getRef() {
    return *(int*)((char*)this + 0x5fc);
}

} } }
