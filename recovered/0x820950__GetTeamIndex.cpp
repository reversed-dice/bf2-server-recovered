// FUNCTION: BF2 0x820950
// 0x820950 GetTeamIndex
extern "C" void* ArrayNth(void*);

extern "C" void* g_statsgame;

int GetTeamIndex(void* self, int def)
{
    if (self != 0 || (self = g_statsgame, self != 0)) {
        void* arr = *(void**)((char*)self + 0x30);
        int* val = (int*)ArrayNth(arr);
        def = *val;
    }
    return def;
}
