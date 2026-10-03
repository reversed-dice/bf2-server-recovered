// FUNCTION: BF2 0x780aa0
// BFSquad::issueSquadAttackOrder 0x780aa0 — wrapper type 5
namespace dice { namespace hfe { namespace ai {

extern void issue_order(void* self, void const* pos, int a, int b, void* obj, int type);

void issueSquadAttackOrder(void* self, void const* pos, int a, int b, void* obj) {
    issue_order(self, pos, a, b, obj, 5);
}

}}}
