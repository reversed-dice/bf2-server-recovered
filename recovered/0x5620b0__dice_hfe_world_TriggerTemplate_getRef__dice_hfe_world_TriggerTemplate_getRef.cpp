// FUNCTION: BF2 0x5620b0
namespace dice { namespace hfe { namespace world {

class TriggerTemplate {
public:
    int getRef();
};

int TriggerTemplate::getRef() {
    return *(int*)((char*)this + 0x1f4);
}

} } }
