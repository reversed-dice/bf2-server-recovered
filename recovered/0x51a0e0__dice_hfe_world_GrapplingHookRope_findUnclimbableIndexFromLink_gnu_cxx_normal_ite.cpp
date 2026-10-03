// FUNCTION: BF2 0x51a0e0
extern "C" int fn_51a0e0(void* self, char* arg, int idx)
{
    int count = 0;
    int target = *(int*)((char*)*(void**)arg + 0x248);
    if (!idx)
        return 0;
    do {
        arg += (long)idx * 8;
        count++;
    } while (*(int*)((char*)*(void**)arg + 0x248) == target);
    return count;
}
