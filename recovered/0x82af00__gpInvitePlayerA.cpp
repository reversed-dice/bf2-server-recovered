// FUNCTION: BF2 0x82af00
struct GPIOutputBuffer
{
    char* data;
    int size;
    int len;
    int pos;
};

struct GPIConnection
{
    unsigned char pad0[0x108];
    int simulation;
    unsigned char pad1[0x198 - 0x10c];
    int sessKey;
    unsigned char pad2[0x23c - 0x19c];
    int connectState;
    unsigned char pad3[0x268 - 0x240];
    GPIOutputBuffer outputBuffer;
};

extern "C" int gpiSetErrorString(void* connection, const char* string);
extern "C" void gpiAppendStringToBuffer(void* connection, GPIOutputBuffer* buffer, const char* string);
extern "C" void gpiAppendIntToBuffer(void* connection, GPIOutputBuffer* buffer, int value);

extern "C" int gpInvitePlayerA(void** connection, int profile, int productID, const char* location)
{
    GPIConnection* iconnection;

    if ((connection == 0) || (*connection == 0))
        return 2;

    iconnection = (GPIConnection*)*connection;

    if (iconnection->simulation)
        return 0;

    if (iconnection->connectState == 4)
    {
        gpiSetErrorString(connection, "The connection has already been disconnected.");
        return 2;
    }

    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\pinvite\\");
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\profileid\\");
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, profile);
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\productid\\");
    gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, productID);
    if ((location != 0) && (location[0] != '\0'))
    {
        gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\location\\");
        gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, location);
    }
    gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

    return 0;
}
