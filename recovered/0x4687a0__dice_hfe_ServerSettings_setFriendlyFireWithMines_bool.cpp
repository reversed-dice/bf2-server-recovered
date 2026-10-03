// FUNCTION: BF2 0x4687a0
struct S4687a0 { char pad[0x4e]; unsigned char b; };
extern S4687a0* g_108a340;

void dice_hfe_ServerSettings_setFriendlyFireWithMines_bool(void* self, unsigned char v)
{
    *(unsigned char*)((char*)self + 0x150) = v;
    g_108a340->b = v;
}
