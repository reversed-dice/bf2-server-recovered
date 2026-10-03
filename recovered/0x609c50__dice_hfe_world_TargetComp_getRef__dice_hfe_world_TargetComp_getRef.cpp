// FUNCTION: BF2 0x609c50
namespace dice { namespace hfe { namespace world {

class TargetComp {
public:
    int getRef();
};

int TargetComp::getRef() {
    return *(int*)((char*)this + 0x28);
}

} } }
