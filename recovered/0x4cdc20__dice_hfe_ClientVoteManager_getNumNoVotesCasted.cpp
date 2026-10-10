// FUNCTION: BF2 0x4cdc20
extern "C" void* dice_hfe_world_playerManager;
extern "C" void* dice_hfe_getPlayer_dice_hfe_world_IPlayerptr(void* p);

struct VoteNode {
    VoteNode* next;
    VoteNode* prev;
    void*     player;
    char      pad[8];
};

int dice_hfe_ClientVoteManager_getNumNoVotesCasted(void)
{
    int count = 0;
    void* mgr = dice_hfe_world_playerManager;
    if (mgr != 0) {
        VoteNode* head = (VoteNode*)((void* (*)(void*))(((void**)*(void**)mgr)[0xf]))(mgr);
        for (VoteNode* it = head->next; it != head; it = it->next) {
            void* p = dice_hfe_getPlayer_dice_hfe_world_IPlayerptr(it->player);
            count += (((int (*)(void*))(((void**)*(void**)p)[0xa6]))(p) == 3);
        }
    }
    return count;
}
// REVERSED_FUNCTION: dice_hfe_ClientVoteManager_getNumNoVotesCasted (0x4cdc20)
