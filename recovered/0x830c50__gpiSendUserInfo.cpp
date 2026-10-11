// FUNCTION: BF2 0x830c50
extern "C" int gpiAppendStringToBuffer(void* conn, void* buffer, const char* str);

extern "C" int gpiSendUserInfo(void* conn, const char* key, const char* value)
{
    void* buf = (char*)*(void**)conn + 0x4f0;
    int ret = gpiAppendStringToBuffer(conn, buf, key);
    if (ret == 0) {
        int r2 = gpiAppendStringToBuffer(conn, buf, value);
        if (r2)
            ret = r2;
    }
    return ret;
}
