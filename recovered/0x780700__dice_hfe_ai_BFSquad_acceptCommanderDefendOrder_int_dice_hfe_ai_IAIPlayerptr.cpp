// FUNCTION: BF2 0x780700
// BFSquad::acceptCommanderDefendOrder 0x780700 — wrapper type 6
namespace dice { namespace hfe { namespace ai {

extern void accept_order(void* self, int squad, void* player, int type);

void acceptCommanderDefendOrder(void* self, int squad, void* player) {
    accept_order(self, squad, player, 6);
}

}}}
