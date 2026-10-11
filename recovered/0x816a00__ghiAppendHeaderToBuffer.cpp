// FUNCTION: BF2 0x816a00
extern "C" int ghiAppendDataToBuffer(void* conn, const char* data, int len);

int ghiAppendHeaderToBuffer(void* conn, const char* key, const char* val)
{
    if (!ghiAppendDataToBuffer(conn, key, 0))
        return 0;
    if (!ghiAppendDataToBuffer(conn, ": ", 2))
        return 0;
    if (!ghiAppendDataToBuffer(conn, val, 0))
        return 0;
    if (!ghiAppendDataToBuffer(conn, "\r\n", 2))
        return 0;
    return 1;
}
