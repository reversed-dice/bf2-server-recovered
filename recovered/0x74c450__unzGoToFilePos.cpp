// FUNCTION: BF2 0x74c450
extern int unzlocal_GetCurrentFileInfoInternal(long, long, long, long, long, long, long, long, long);

int unzGoToFilePos(long param_1, long *param_2) {
    if (param_1 == 0 || param_2 == 0) return 0xffffff9a;
    *(long*)(param_1 + 0x68) = *param_2;
    *(long*)(param_1 + 0x60) = param_2[1];
    int result = unzlocal_GetCurrentFileInfoInternal(param_1, param_1 + 0x90, param_1 + 0x118, 0, 0, 0, 0, 0, 0);
    *(long*)(param_1 + 0x70) = (long)(result == 0);
    return result;
}
