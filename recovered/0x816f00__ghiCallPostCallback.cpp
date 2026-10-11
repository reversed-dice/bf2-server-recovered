// FUNCTION: BF2 0x816f00
#include <assert.h>
struct Connection {
    char p00[0x4];
    int request;
    char p08[0x68];
    void* f70;
    char p78[0x160];
    void* postBuffer;
    int f1e0;
    int f1e4;
    int f1e8;
    void* f1f0;
};
typedef void (*PostCallback)(int, int, int, int, int, void*);
extern "C" {
int ArrayLength(void* array);
}
extern "C" void ghiCallPostCallback(Connection* connection)
{
















































































    assert(connection != 0);
    PostCallback callback = (PostCallback)connection->f1f0;
    if (callback == 0)
        return;
    callback(connection->request, connection->f1e4, connection->f1e8, connection->f1e0, ArrayLength(connection->postBuffer), connection->f70);
}
