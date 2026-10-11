// FUNCTION: BF2 0x830be0
extern "C" int gpiAppendStringToBuffer(void* conn, void* buffer, const char* str);

extern "C" int gpiSendLocalInfo(void* conn, const char* key, const char* value)
{
    void* buf = (char*)*(void**)conn + 0x4d8;
    int ret = gpiAppendStringToBuffer(conn, buf, key);
    if (ret == 0) {
        int r2 = gpiAppendStringToBuffer(conn, buf, value);
        if (r2)
            ret = r2;
    }
    return ret;
}
