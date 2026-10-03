// FUNCTION: BF2 0x4a4360
extern "C" float getTicketChangePerSecond_4a4360(long param_1, unsigned int param_2) {
    if ((param_2 - 1) > 1) {
        unsigned int bits = 0xbf800000;
        return *(float*)&bits;
    }
    return *(float*)(param_1 + 0x4c0 + (unsigned long)(param_2 - 1) * 4);
}
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_getTicketChangePerSecond_unsigned_int (0x4a4360)
