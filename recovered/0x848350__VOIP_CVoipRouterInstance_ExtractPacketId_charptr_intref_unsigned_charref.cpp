// FUNCTION: BF2 0x848350
// 0x848350 VOIP_CVoipRouterInstance_ExtractPacketId
int ExtractPacketId(void* a1, char* data, int* len, char* out)
{
    if (*len > 0) {
        *out = data[*len - 1];
        *len = *len - 1;
        return 1;
    }
    return -1;
}
