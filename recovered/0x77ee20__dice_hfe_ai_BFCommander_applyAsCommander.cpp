// FUNCTION: BF2 0x77ee20
// dice::hfe::ai::BFCommander::applyAsCommander(IAIPlayer*) -- 0x77ee20
//
// Reads the squad manager's vtable slot +0xb0 BEFORE the two player queries
// (that is where the target loads it), then tail-calls it with the player's
// squad id and team.

typedef unsigned (*FnQuery_77ee20)(void*);
typedef void     (*FnApply_77ee20)(void*, unsigned, unsigned);

extern "C" void applyAsCommander_77ee20(void*, void* player)
{
    void* squadManager = *(void**)0x010b8c00;
    FnApply_77ee20 apply = *(FnApply_77ee20*)(*(char**)squadManager + 0xb0);
    unsigned a = (*(FnQuery_77ee20*)(*(char**)player + 0x38))(player);
    unsigned b = (*(FnQuery_77ee20*)(*(char**)player + 0xd8))(player);
    apply(*(void**)0x010b8c00, b, a);
}
// REVERSED_FUNCTION: dice_hfe_ai_BFCommander_applyAsCommander_dice_hfe_ai_IAIPlayerptr (0x77ee20)
