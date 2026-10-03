// FUNCTION: BF2 0x55f330
namespace dice { namespace hfe { namespace world {

class TargetObject {
public:
    int getTargetObjectId();
};

int TargetObject::getTargetObjectId() {
    return *(int*)((char*)this + 0x240);
}

} } }
