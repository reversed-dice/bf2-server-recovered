// FUNCTION: BF2 0x625820
namespace dice { namespace hfe {
class PreDestinedFollowComp {
public:
    char _pad[0x40];
    int field;
    void setDelayTick(int v);
};
void PreDestinedFollowComp::setDelayTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PreDestinedFollowComp_setDelayTick (0x625820)
