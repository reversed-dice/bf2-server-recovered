// FUNCTION: BF2 0x80b950
extern "C" void* gsimalloc(unsigned long size);
extern "C" void* memcpy(void* dst, const void* src, unsigned long n);
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

char* ciParseValue(const char* flags, int* len)
{
    int i;
    char* str;

    if (flags == 0)
        __assert_fail("flags", "External/GameSpy/chat/chatHandlers.c", 0xb48, "ciParseValue");
    if (len == 0)
        __assert_fail("len", "External/GameSpy/chat/chatHandlers.c", 0xb49, "ciParseValue");

    if (!flags || (flags[0] != '\\'))
        return 0;

    flags++;

    for (i = 0; flags[i] && (flags[i] != '\\'); i++) { };

    str = (char*)gsimalloc((unsigned int)i + 1);
    if (!str)
        return 0;

    memcpy(str, flags, (unsigned int)i);
    str[i] = '\0';

    *len = (i + 1);
    return str;
}
