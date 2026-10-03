// FUNCTION: BF2 0x77b940
typedef void* (*vfn1)(void*);
extern "C" char fn_4cad90(void*, void*);
extern "C" void* g_0108d650;
extern "C" unsigned char target_77b940(void* self, void* arg)
{
    void* a = ((vfn1*)*(void***)arg)[0x18/8](arg);
    return (unsigned char)fn_4cad90(g_0108d650, a);
}
