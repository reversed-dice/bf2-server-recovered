// FUNCTION: BF2 0x566900
namespace dice { namespace hfe { namespace world {

class TriggerableTargetTemplate {
public:
    int getRef();
};

int TriggerableTargetTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
