// FUNCTION: BF2 0x780840
// BFSquad::declineCommanderMoveOrder 0x780840 — wrapper type 4
namespace dice { namespace hfe { namespace ai {

extern void decline_order(void* self, int squad, void* player, int type);

void declineCommanderMoveOrder(void* self, int squad, void* player) {
    decline_order(self, squad, player, 4);
}

}}}
