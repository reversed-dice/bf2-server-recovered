// FUNCTION: BF2 0x780820
// BFSquad::declineCommanderAttackOrder 0x780820 — wrapper type 5
namespace dice { namespace hfe { namespace ai {

extern void decline_order(void* self, int squad, void* player, int type);

void declineCommanderAttackOrder(void* self, int squad, void* player) {
    decline_order(self, squad, player, 5);
}

}}}
