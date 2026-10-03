// FUNCTION: BF2 0x5668a0
namespace dice { namespace hfe { namespace world {

class TriggerableTemplate {
public:
    int getRef();
};

int TriggerableTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
