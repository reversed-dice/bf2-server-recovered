// FUNCTION: BF2 0x54ddc0
// Soldier_handleDropOnItem
extern "C" void _ZN9dice_hfe6Soldier7dropKitEv(long);
void Soldier_handleDropOnItem(long self, long player, long item) {
    if (item != 0) {
        long obj = *(long*)(item + 0x28);
        int cid = (*(int(**)(long))(*(long*)obj + 0x20))(obj);
        if (cid != *(int*)0x00c7d038) return;
    }
    _ZN9dice_hfe6Soldier7dropKitEv(self);
}
