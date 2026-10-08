// FUNCTION: BF2 0x7743f0
int getAiCombatAreaLayer_0x7743f0(void* self)
{
    char* p = (char*)self;
    void** end = *(void***)(p + 0x40);
    void** begin = *(void***)(p + 0x38);
    int layer = 0xff;
    if (end - begin != 0) {
        layer = *(unsigned char*)((char*)*begin + 0x40);
    }
    return layer;
}
