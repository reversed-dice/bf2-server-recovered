// FUNCTION: BF2 0x816400
#include <assert.h>
struct Buf {
    char p00[0x8];
    char* data;
    int size;
    char p14[0xc];
    int fixed;
};
extern "C" {
void* gsirealloc(void* ptr, unsigned int size);
}
extern "C" int ghiResizeBuffer(Buf* buffer, int sizeIncrement)
{
    char* newData;
    int newSize;
    int result;
















    assert(buffer != 0);
    assert(sizeIncrement > 0);
    assert(buffer->fixed == 0);
    newSize = buffer->size + sizeIncrement;
    newData = (char*)gsirealloc(buffer->data, newSize);
    result = 0;
    if (newData != 0)
    {
        buffer->data = newData;
        buffer->size = newSize;
        result = 1;
    }
    return result;
}
