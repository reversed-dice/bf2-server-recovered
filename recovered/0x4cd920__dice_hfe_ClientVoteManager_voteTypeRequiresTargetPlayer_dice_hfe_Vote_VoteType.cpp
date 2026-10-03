// FUNCTION: BF2 0x4cd920
// ClientVoteManager::voteTypeRequiresTargetPlayer 0x4cd920 — membre
namespace dice { namespace hfe {

bool voteTypeRequiresTargetPlayer(void* self, int type) {
    unsigned int t = (unsigned int)(type - 2);
    return t <= 1;
}

}}
