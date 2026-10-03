// FUNCTION: BF2 0x4a42f0
// setTicketChangePerSecond v3 - unsigned index
extern "C" long dice_hfe_world_scoreManager[];
extern "C" void dice_hfe_world_TeamScore_setTicketBleed_bool(long, int);

extern "C" void dice_hfe_ServerGameLogic_setTicketChangePerSecond_unsigned_int_float(
    float rate, long self, unsigned int team)
{
    unsigned int idx = team - 1;
    if (idx > 1) return;
    float* slots = (float*)(self + 0x4c0);
    slots[idx] = rate;
    long scoreMgr = *(long*)&dice_hfe_world_scoreManager;
    long vtbl = *(long*)scoreMgr;
    long ts = ((long(*)(long))(*(long*)(vtbl + 0x20)))(scoreMgr);
    dice_hfe_world_TeamScore_setTicketBleed_bool(ts, rate != 0.0f);
}