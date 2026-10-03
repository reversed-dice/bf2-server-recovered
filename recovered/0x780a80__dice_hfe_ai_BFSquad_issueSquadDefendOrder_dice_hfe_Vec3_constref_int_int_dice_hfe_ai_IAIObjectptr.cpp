// FUNCTION: BF2 0x780a80
// BFSquad::issueSquadDefendOrder 0x780a80 — wrapper type 6
namespace dice { namespace hfe { namespace ai {

extern void issue_order(void* self, void const* pos, int a, int b, void* obj, int type);

void issueSquadDefendOrder(void* self, void const* pos, int a, int b, void* obj) {
    issue_order(self, pos, a, b, obj, 6);
}

}}}
