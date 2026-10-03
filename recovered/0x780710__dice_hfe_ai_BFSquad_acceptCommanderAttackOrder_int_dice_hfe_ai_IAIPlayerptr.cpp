// FUNCTION: BF2 0x780710
// BFSquad::acceptCommanderAttackOrder 0x780710 — wrapper type 5
namespace dice { namespace hfe { namespace ai {

extern void accept_order(void* self, int squad, void* player, int type);

void acceptCommanderAttackOrder(void* self, int squad, void* player) {
    accept_order(self, squad, player, 5);
}

}}}
