// FUNCTION: BF2 0x5668c0
namespace dice { namespace hfe { namespace world {

class TriggerableTarget {
public:
    int getRef();
};

int TriggerableTarget::getRef() {
    return *(int*)((char*)this + 0x240);
}

} } }
