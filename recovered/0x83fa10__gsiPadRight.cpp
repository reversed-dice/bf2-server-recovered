// FUNCTION: BF2 0x83fa10
#include <string.h>
extern "C" void gsiPadRight(char* buffer, char padChar, int width)
{
    int len = strlen(buffer);
    memset(buffer + len, padChar, width - len);
}
