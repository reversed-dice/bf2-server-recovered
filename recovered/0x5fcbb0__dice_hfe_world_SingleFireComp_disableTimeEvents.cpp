// FUNCTION: BF2 0x5fcbb0
extern "C" void disableTimeEvents_5fcbb0(void* self)
{
    for (int i = 3; i != 0; i--) {
        *(unsigned char*)((char*)self + 0x16d) = 0;
        self = (char*)self + 1;
    }
}
