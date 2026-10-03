// FUNCTION: BF2 0x5c2580
namespace dice { namespace hfe {
class VehicleHudCompTemplate {
public:
    char _pad[0x5b];
    bool field;
    void setIsCoDriver(bool v);
};
void VehicleHudCompTemplate::setIsCoDriver(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_VehicleHudCompTemplate_setIsCoDriver (0x5c2580)
