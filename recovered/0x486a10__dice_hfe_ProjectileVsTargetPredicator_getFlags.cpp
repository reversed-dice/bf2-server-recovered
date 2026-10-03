// FUNCTION: BF2 0x486a10
namespace dice { namespace hfe {
class ProjectileVsTargetPredicator {
public:
    char _pad[0x8];
    int field;
    int getFlags() const;
};
int ProjectileVsTargetPredicator::getFlags() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ProjectileVsTargetPredicator_getFlags (0x486a10)
