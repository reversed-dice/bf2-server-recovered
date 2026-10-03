// FUNCTION: BF2 0x4871a0
class dice_hfe_GameLogic {
public:
    int getRef();
};

int dice_hfe_GameLogic::getRef() {
    return *(int*)((char*)this + 0x10);
}
