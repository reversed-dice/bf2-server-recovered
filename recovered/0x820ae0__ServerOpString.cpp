// FUNCTION: BF2 0x820ae0
extern void* g_statsgame;
extern void* fn_81ebd0(void*, char const*, int, void*);

typedef void* (*OpFnStr)(void*, char const*, void*);

void* fn_820ae0(void* stats, char const* name, OpFnStr fn, void* value)
{
    if (stats == 0) {
        stats = g_statsgame;
        if (stats == 0)
            return value;
    }
    void* r = fn(*(void**)((char*)stats + 0x10), name, value);
    if (r != 0)
        return r;
    return fn_81ebd0(*(void**)((char*)stats + 0x10), name, 2, value);
}
