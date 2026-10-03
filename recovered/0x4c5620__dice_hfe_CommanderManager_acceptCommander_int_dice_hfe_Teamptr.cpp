// FUNCTION: BF2 0x4c5620
// CommanderManager::acceptCommander 0x4c5620 — check + tail-call
namespace dice { namespace hfe {

extern void cm_accept(void* self, int player, void* team);

void acceptCommander(void* self, int player, void* team) {
    int cur = *(int*)((char*)self + 0xc);
    if (cur == player)
        cm_accept(self, cur, team);
}

}}
