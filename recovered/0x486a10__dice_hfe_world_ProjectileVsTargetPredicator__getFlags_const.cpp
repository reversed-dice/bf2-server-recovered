// FUNCTION: BF2 0x486a10
class dice_hfe_world_ProjectileVsTargetPredicator {
public:
    int getFlags_const() const;
};

int dice_hfe_world_ProjectileVsTargetPredicator::getFlags_const() const {
    return *(int*)((char*)this + 0x8);
}
