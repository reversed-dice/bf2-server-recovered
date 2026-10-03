// FUNCTION: BF2 0x5be580
namespace dice { namespace hfe {
class StrategicObjectComp {
public:
    char _pad[0x20];
    int field;
    void setIndex(int v);
};
void StrategicObjectComp::setIndex(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StrategicObjectComp_setIndex (0x5be580)
