// FUNCTION: BF2 0x442590
// BF2_FLAGS: -fcrossjumping
struct GhostNode {
    GhostNode* next;
    unsigned int id;
    long data;
};

long dice_hfe_GhostManager_findGhostObjectInHash_unsigned_short(long p, unsigned short id) {
    if (id == 0) return 0;
    unsigned int uid = id;
    unsigned long bucket = uid % *(unsigned int*)(p + 0x30);
    GhostNode* node = *(GhostNode**)(*(long*)(p + 0x28) + bucket * 8);
    while (node != 0) {
        if (uid == node->id) {
            return node->data;
        }
        node = node->next;
    }
    return 0;
}
