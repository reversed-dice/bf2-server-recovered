// FUNCTION: BF2 0x560030
// TargetObject::handleMessage - check message type and dispatch
extern "C" {
    void dice_hfe_world_TargetObject_initTargetId(long self);
    void dice_hfe_world_TargetObject_updateActiveStatus(long self, int msg, long player);
}

void TargetObject_handleMessage(long self, int msg, long player, bool flag) {
    if (msg == 0x1d) {
        dice_hfe_world_TargetObject_initTargetId(self);
    }
    dice_hfe_world_TargetObject_updateActiveStatus(self, msg, player);
}
