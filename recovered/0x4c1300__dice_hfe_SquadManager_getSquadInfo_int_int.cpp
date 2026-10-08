// FUNCTION: BF2 0x4c1300
extern "C" int getSquad_4c0df0(int a, int b);

extern "C" void getSquadInfo_4c1300(int a, int b)
{
    int r = getSquad_4c0df0(a, b);
    if (r == 0) return;
}
