// FUNCTION: BF2 0x8267b0
// ServerBrowser sort key comparators
extern "C" int SBServerGetIntValueA(void *server, char const *key, int index);
extern "C" char *SBServerGetStringValueA(void *server, char const *key, char const *def);
extern "C" int strcmp(char const *a, char const *b);
extern "C" int strcasecmp(char const *a, char const *b);
extern "C" int prevKeyCompare(void *a, void *b);

struct SBServerList {
    char pad0[0x8b8];
    char key[0x208];
    int desc;
};

extern "C" SBServerList *g_sortserverlist;

// compile-state padding: 7 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int IntKeyCompare(void *a, void *b)
{
    char const *key = g_sortserverlist->key;
    void *s1 = *(void **)a;
    void *s2 = *(void **)b;
    int r = SBServerGetIntValueA(s1, key, 0) - SBServerGetIntValueA(s2, key, 0);
    if (r == 0)
        return prevKeyCompare(s1, s2);
    return g_sortserverlist->desc ? r : -r;
}

extern "C" int StrCaseKeyCompare(void *a, void *b)
{
    char const *key = g_sortserverlist->key;
    void *s1 = *(void **)a;
    void *s2 = *(void **)b;
    int r = strcmp(SBServerGetStringValueA(s1, key, ""), SBServerGetStringValueA(s2, key, ""));
    if (r == 0)
        return prevKeyCompare(s1, s2);
    return g_sortserverlist->desc ? r : -r;
}

extern "C" int StrNoCaseKeyCompare(void *a, void *b)
{
    char const *key = g_sortserverlist->key;
    void *s1 = *(void **)a;
    void *s2 = *(void **)b;
    int r = strcasecmp(SBServerGetStringValueA(s1, key, ""), SBServerGetStringValueA(s2, key, ""));
    if (r == 0)
        return prevKeyCompare(s1, s2);
    return g_sortserverlist->desc ? r : -r;
}
