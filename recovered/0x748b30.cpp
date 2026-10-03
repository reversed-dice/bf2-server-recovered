#include <stdio.h>
extern "C" void fn_407e08(void*, void*, void*);

extern "C" void* floatToString_748b30(void* self, float f)
{
    char tmp[1];
    sprintf((char*)0x10a5160, "0xb9a20b", (double)f);
    fn_407e08(self, (void*)0x10a5160, tmp);
    return self;
}
