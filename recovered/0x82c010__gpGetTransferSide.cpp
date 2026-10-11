// FUNCTION: BF2 0x82c010
extern "C" int   gpiSetErrorString(void* gpi, const char* msg);
extern "C" void* gpiFindTransferByLocalID(void* gpi, int localID);

int gpGetTransferSide(void* gpi, int localID, int* side)
{
    void* t = gpiFindTransferByLocalID(gpi, localID);

    if (t == 0) {
        gpiSetErrorString(gpi, "Invalid transfer.");
        return 2;
    }

    if (*(int*)((char*)t + 0x20) != 0)
        *side = 0xa00;
    else
        *side = 0xa01;

    return 0;
}
