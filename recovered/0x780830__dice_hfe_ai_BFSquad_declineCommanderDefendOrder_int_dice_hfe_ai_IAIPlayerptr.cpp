// FUNCTION: BF2 0x780830
// BFSquad::declineCommanderDefendOrder 0x780830 — wrapper type 6
namespace dice { namespace hfe { namespace ai {

extern void decline_order(void* self, int squad, void* player, int type);

void declineCommanderDefendOrder(void* self, int squad, void* player) {
    decline_order(self, squad, player, 6);
}

}}}
