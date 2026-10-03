// FUNCTION: BF2 0x5bb9c0
namespace dice { namespace hfe { namespace world {

class AbilityHudCompTemplate {
public:
    int getRef();
};

int AbilityHudCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
