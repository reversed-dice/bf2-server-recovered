// FUNCTION: BF2 0x453c10
extern "C" unsigned char fn_4f1d30(void*);

unsigned char dice_hfe_GameServer_isRecordingDemo_const(void* self)
{
    void* rec = *(void**)((char*)self + 0x178);
    return rec != 0 && fn_4f1d30(rec);
}
// REVERSED_FUNCTION: dice_hfe_GameServer_isRecordingDemo_const (0x453c10)
