// FUNCTION: BF2 0x4d0750
extern "C" void* g_system;
typedef double (*vfn1)(void*);

extern "C" bool voteInProgress_4d0750(void* self)
{
    float t = *(float*)((char*)self + 0x4);
    double d = ((vfn1)(*(void***)g_system)[0x30/8])(g_system);
    return t > (float)d;
}
