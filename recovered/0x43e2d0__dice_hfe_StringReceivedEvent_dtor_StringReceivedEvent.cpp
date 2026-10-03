// FUNCTION: BF2 0x43e2d0
extern "C" void _ZdaPv(void*);
void dice_hfe_StringReceivedEvent_dtor_StringReceivedEvent(long self) {
    *(long*)self = (long)0xb2f5f0;
    long field = *(long*)(self + 0x40);
    if (field != 0) { _ZdaPv((void*)field); }
    *(long*)self = (long)0xb2d8f0;
}
