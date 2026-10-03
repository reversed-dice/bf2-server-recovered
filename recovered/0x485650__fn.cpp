// FUNCTION: BF2 0x485650
extern "C" void* fn_487230(void*, void*);
int dice_hfe_GameLogic_getTeamFromName_std_string_constref(void* self, void* str)
{ void* r = fn_487230((char*)self + 0xb0, str); return *(int*)((char*)r + 0x28); }
