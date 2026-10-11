// FUNCTION: BF2 0x832980
extern "C" void* gsimalloc(unsigned long size);
extern "C" void gsifree(void* p);
extern "C" int shutdown(int fd, int how);
extern "C" int close(int fd);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct GPISearchData
{
    int pad0;
    int sock;
    void* inputBuffer;
    char pad1[0x10];
    void* outputBuffer;
};

struct GPIOperation
{
    int type;
    char pad0[4];
    void* data;
};

struct GPIConnection
{
    char pad0[0x28c];
    int numSearches;
};

typedef GPIConnection* GPConnection;

void gpiDestroyOperation(GPConnection* connection, GPIOperation* operation)
{
    GPIConnection* iconnection = *connection;

    if (operation->type == 3)
    {
        GPISearchData* data = (GPISearchData*)operation->data;

        iconnection->numSearches--;
        if (iconnection->numSearches < 0)
            __assert_fail("iconnection->numSearches >= 0", "External/GameSpy/gp/gpiOperation.c", 0xc2, "gpiDestroyOperation");

        shutdown(data->sock, 2);
        close(data->sock);

        gsifree(data->outputBuffer);
        data->outputBuffer = 0;
        gsifree(data->inputBuffer);
        data->inputBuffer = 0;
    }

    gsifree(operation->data);
    operation->data = 0;

    gsifree(operation);
}
