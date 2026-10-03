// FUNCTION: BF2 0x820980
// 0x820980 GetPlayerIndex
extern "C" void* ArrayNth(void*);

extern "C" void* g_statsgame;

int GetPlayerIndex(void* self, int def)
{
    if (self != 0 || (self = g_statsgame, self != 0)) {
        void* arr = *(void**)((char*)self + 0x28);
        int* val = (int*)ArrayNth(arr);
        def = *val;
    }
    return def;
}
