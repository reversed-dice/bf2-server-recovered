// FUNCTION: BF2 0x8aa0c0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern "C" unsigned int g_c76048;
extern "C" void* fn_69de30(unsigned int cid);
long eom_8aa0c0(char* self) {
    if (*(int*)(self + 0x30) != 1) return 0;
    int* src = *(int**)(self + 0x38);
    int v[3];
    int a = src[2];
    int b = src[1];
    int c = src[0];
    v[0] = c;
    v[1] = b;
    v[2] = a;
    *(char*)(self + 0x108) = 0;
    void* o = fn_69de30(g_c76048);
    char* sub = (char*)o + 0x68;
    void (*fn)(void*, int*) = ((void(**)(void*, int*))*(void**)sub)[0x6];
    fn(sub, v);
    return 0;
}
} } }
// REVERSED_FUNCTION: test (0x8aa0c0)
