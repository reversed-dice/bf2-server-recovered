// FUNCTION: BF2 0x849700
extern "C" void stPbSv_AddPbEvent_int_int_int_charptr_int(void*, int, int, int, char*, int);
void EnablePbSv() {
    stPbSv_AddPbEvent_int_int_int_charptr_int((void*)0x10b3240, 0x76, -1, 0, 0, 0);
}
// REVERSED_FUNCTION: EnablePbSv (0x849720)
