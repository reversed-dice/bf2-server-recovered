// FUNCTION: BF2 0x816e20
#include <assert.h>
struct Connection {
    char p00[0x4];
    int f04;
    char p08[0x4];
    int f0c;
    char p10[0x48];
    int f58;
    char p5c[0x0c];
    void* f68;
    void* f70;
    char p78[0xd0];
    long f148;
    char p150[0x14];
    int f164;
    char p168[0x24];
    int f18c;
};
typedef int (*CompletedCallback)(int, int, long, int, void*);
extern "C" void ghiCallCompletedCallback(Connection* connection)
{




    assert(connection != 0);
    CompletedCallback callback = (CompletedCallback)connection->f68;
    if (callback == 0)
        return;
    long arg3 = 0;
    if (connection->f0c == 0)
        arg3 = connection->f148;
    int result = callback(connection->f04, connection->f58, (long)arg3, connection->f18c, connection->f70);
    if (arg3 != 0 && result == 0)
        connection->f164 = 1;
}
