// FUNCTION: BF2 0x43e160
extern "C" void _ZdaPv(void*);
void dice_hfe_DataBlockReadyEvent_dtor_DataBlockReadyEvent(long self) {
    *(long*)self = (long)0xb2f4b0;
    long field = *(long*)(self + 0x38);
    if (field != 0) { _ZdaPv((void*)field); }
    *(long*)self = (long)0xb2d8f0;
}
