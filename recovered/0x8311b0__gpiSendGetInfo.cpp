// FUNCTION: BF2 0x8311b0
// gpiSendGetInfo
extern "C" void gpiAppendStringToBuffer(void* conn, void* buffer, char const* str);
extern "C" void gpiAppendIntToBuffer(void* conn, void* buffer, int value);

int gpiSendGetInfo(void* connection, int profileId, int id) {
    void* conn = *(void**)connection;
    char* buffer = (char*)conn + 0x268;
    gpiAppendStringToBuffer(connection, buffer, "\\getprofile\\\\sesskey\\");
    gpiAppendIntToBuffer(connection, buffer, *(int*)((char*)conn + 0x198));
    gpiAppendStringToBuffer(connection, buffer, "\\profileid\\");
    gpiAppendIntToBuffer(connection, buffer, profileId);
    gpiAppendStringToBuffer(connection, buffer, "\\id\\");
    gpiAppendIntToBuffer(connection, buffer, id);
    gpiAppendStringToBuffer(connection, buffer, "\\final\\");
    return 0;
}
