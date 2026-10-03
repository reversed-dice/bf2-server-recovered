// FUNCTION: BF2 0x642b50
namespace dice { namespace hfe {
class WindAffectorTemplate {
public:
    char _pad[0x14];
    bool field;
    void setWindIsDynamic(bool v);
};
void WindAffectorTemplate::setWindIsDynamic(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_WindAffectorTemplate_setWindIsDynamic (0x642b50)
