// FUNCTION: BF2 0x4922c0
class dice_hfe_world_ObjectFlagPredicator {
public:
    int getFlags_const() const;
};

int dice_hfe_world_ObjectFlagPredicator::getFlags_const() const {
    return *(int*)((char*)this + 0x8);
}
