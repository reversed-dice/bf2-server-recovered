// FUNCTION: BF2 0x8054d0
extern "C" {
void __assert_fail(const char*, const char*, unsigned int, const char*) __attribute__((noreturn));
int strcasecmp(const char*, const char*, ...);
}

int ciUserTableCompareFn(const char* elem1, const char* elem2) {
    if (elem1 == 0)
        __assert_fail("elem1 != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 238, __PRETTY_FUNCTION__);
    if (elem2 == 0)
        __assert_fail("elem2 != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 239, __PRETTY_FUNCTION__);
    if (elem1[0] == 0)
        __assert_fail("str1[0] != '\\0'", "External/GameSpy/chat/chatChannel.c", 258, __PRETTY_FUNCTION__);
    if (elem2[0] == 0)
        __assert_fail("str2[0] != '\\0'", "External/GameSpy/chat/chatChannel.c", 259, __PRETTY_FUNCTION__);
    return strcasecmp(elem1, elem2);
}
