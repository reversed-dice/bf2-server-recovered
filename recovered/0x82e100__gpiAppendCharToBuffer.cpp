// FUNCTION: BF2 0x82e100
typedef int GPResult;
#define GPI_READ_SIZE (16 * 1024)

extern "C" void* gsirealloc(void* ptr, unsigned int size);
extern "C" void gpiSetErrorString(void* connection, const char* str);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

struct GPIBuffer
{
    char* buffer;
    int size;
    int len;
    int pos;
};

GPResult gpiAppendCharToBuffer(void* connection, GPIBuffer* outputBuffer, char c)
{
    int len;
    int size;
    char* output;

    if (outputBuffer == 0)
        __assert_fail("outputBuffer != ((void *)0)", "External/GameSpy/gp/gpiBuffer.c", 41, "gpiAppendCharToBuffer");

    len = outputBuffer->len;
    size = outputBuffer->size;
    output = outputBuffer->buffer;

    if (size == len)
    {
        size += GPI_READ_SIZE;
        output = (char*)gsirealloc(output, (unsigned int)size + 1);
        if (output == 0)
        {
            gpiSetErrorString(connection, "Out of memory.");
            return 1;
        }
    }

    output[len] = c;
    output[len + 1] = '\0';

    outputBuffer->len++;
    outputBuffer->size = size;
    outputBuffer->buffer = output;

    return 0;
}
