// FUNCTION: BF2 0x7458f0
extern "C" unsigned char fn_7458d0(void* self, void* arg);

extern "C" unsigned char fn_7458f0(void* self, void* arg)
{
    return fn_7458d0((char*)self + 0x80, arg);
}
