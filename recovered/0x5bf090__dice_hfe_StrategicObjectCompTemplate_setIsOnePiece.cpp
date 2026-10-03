// FUNCTION: BF2 0x5bf090
namespace dice { namespace hfe {
class StrategicObjectCompTemplate {
public:
    char _pad[0x44];
    bool field;
    void setIsOnePiece(bool v);
};
void StrategicObjectCompTemplate::setIsOnePiece(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_StrategicObjectCompTemplate_setIsOnePiece (0x5bf090)
