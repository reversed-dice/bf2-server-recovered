// FUNCTION: BF2 0x780a90
// BFSquad::issueSquadMoveOrder 0x780a90 — wrapper type 4
namespace dice { namespace hfe { namespace ai {

extern void issue_order(void* self, void const* pos, int a, int b, void* obj, int type);

void issueSquadMoveOrder(void* self, void const* pos, int a, int b, void* obj) {
    issue_order(self, pos, a, b, obj, 4);
}

}}}
