typedef unsigned int (*TFn)(void*, unsigned int, void*);
extern "C" unsigned int dice_hfe_PostRemoteEvent_eventReceivedByRemote(void* self, unsigned int* p) {
    unsigned int u = *p;
    if (*(long*)((char*)self + 0x10) != 0x1400000006) return 0;
    *(unsigned int*)(*(char**)0x0108acd0 + 0x28) = *(unsigned int*)((char*)self + 0x14);
    *(unsigned int*)(*(char**)0x0108acd0 + 0x38) = u;
    *(void**)(*(char**)0x0108acd0 + 0x30) = (char*)self + 0x18;
    return ((TFn)(*(void***)*(void**)0x010b3730)[0x20 / 8])(
        *(void**)0x010b3730, *(unsigned int*)((char*)self + 0x10), *(void**)0x0108acd0);
}
