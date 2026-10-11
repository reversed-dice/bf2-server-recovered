// FUNCTION: BF2 0x829f10
extern "C" void* memset(void* s, int c, unsigned long n);
extern "C" int gpiSetErrorString(void* connection, const char* string);
typedef int (*GPCallback)(void* connection, void* arg, void* param);
extern "C" int gpiGetInfo(void* connection, int profile, int checkCache, int blocking, GPCallback callback, void* param);

struct GPIConnection
{
    unsigned char pad0[0x108];
    int simulation;
    unsigned char pad1[0x23c - 0x10c];
    int connectState;
};

struct GPGetInfoResponseArg
{
    unsigned char data[0x204];
};

extern "C" int gpGetInfo(void** connection, int profile, int checkCache, int blocking, GPCallback callback, void* param)
{
    GPIConnection* iconnection;

    if ((connection == 0) || (*connection == 0) || (profile == 0))
        return 2;

    if (callback == 0)
    {
        gpiSetErrorString(connection, "No callback.");
        return 2;
    }

    iconnection = (GPIConnection*)*connection;

    if (iconnection->simulation)
    {
        GPGetInfoResponseArg arg;
        memset(&arg, 0, sizeof(arg));
        callback(connection, &arg, param);
        return 0;
    }

    if (iconnection->connectState == 4)
    {
        gpiSetErrorString(connection, "The connection has already been disconnected.");
        return 2;
    }

    return gpiGetInfo(connection, profile, checkCache, blocking, callback, param);
}
