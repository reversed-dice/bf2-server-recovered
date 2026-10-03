// FUNCTION: BF2 0x521fa0
namespace dice { namespace hfe { namespace world {

class GrapplingHookRopeTemplate {
public:
    int getRef();
};

int GrapplingHookRopeTemplate::getRef() {
    return *(int*)((char*)this + 0x1c8);
}

} } }
