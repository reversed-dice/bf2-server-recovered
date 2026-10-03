// FUNCTION: BF2 0x642200
namespace dice { namespace hfe {
class WindAffector {
public:
    char _pad[0x20];
    bool field;
    void setIsActive(bool v);
};
void WindAffector::setIsActive(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WindAffector_setIsActive (0x642200)
