// FUNCTION: BF2 0x4c6e50
extern "C" char namesToIds_4c6d30(void* p1, int* a, int* b, int* c, void* s1, void* s2, void* s3);
extern "C" int playRadioMessage_4c6690(void* p1, int p2, int x, int y, int z);

extern "C" int playRadioMessage_4c6e50(void* p1, int p2, void* p3, void* p4, void* p5)
{
    int local_1c, local_18, local_14;
    char c = namesToIds_4c6d30(p1, &local_1c, &local_18, &local_14, p3, p4, p5);
    if (c != 0) {
        return playRadioMessage_4c6690(p1, p2, local_1c, local_18, local_14);
    }
    return -1;
}
