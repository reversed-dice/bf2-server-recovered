// FUNCTION: BF2 0x849780
extern "C" void stPbSv_AddPbEvent_int_int_int_charptr_int(int, int, int, unsigned, void*, int);

void fn_0x849780(void* p1, unsigned p2) {
    stPbSv_AddPbEvent_int_int_int_charptr_int(0x10b3240, 0x33, -1, p2, p1, 0);
}
// REVERSED_FUNCTION: PbServerCompleteCommand (0x849780)
