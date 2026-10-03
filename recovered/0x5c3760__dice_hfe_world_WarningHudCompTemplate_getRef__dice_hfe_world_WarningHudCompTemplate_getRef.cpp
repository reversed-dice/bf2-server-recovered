// FUNCTION: BF2 0x5c3760
namespace dice { namespace hfe { namespace world {

class WarningHudCompTemplate {
public:
    int getRef();
};

int WarningHudCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
