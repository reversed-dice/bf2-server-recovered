// FUNCTION: BF2 0x7806f0
// BFSquad::acceptCommanderMoveOrder 0x7806f0 — wrapper type 4
namespace dice { namespace hfe { namespace ai {

extern void accept_order(void* self, int squad, void* player, int type);

void acceptCommanderMoveOrder(void* self, int squad, void* player) {
    accept_order(self, squad, player, 4);
}

}}}
