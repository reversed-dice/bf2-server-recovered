// FUNCTION: BF2 0x4cd960
// ServerVoteManager::getTeamVoteOnly 0x4ceb40 — v2: retourne le byte brut
namespace dice { namespace hfe {

unsigned char getTeamVoteOnly() {
    void* g = *(void**)0x108b660;
    if (g == 0)
        return 1;
    return *(unsigned char*)((char*)g + 0x4f);
}

}}
