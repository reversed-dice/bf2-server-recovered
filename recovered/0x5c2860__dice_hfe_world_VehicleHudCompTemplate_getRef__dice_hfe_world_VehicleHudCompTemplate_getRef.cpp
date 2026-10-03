// FUNCTION: BF2 0x5c2860
namespace dice { namespace hfe { namespace world {

class VehicleHudCompTemplate {
public:
    int getRef();
};

int VehicleHudCompTemplate::getRef() {
    return *(int*)((char*)this + 0x10);
}

} } }
