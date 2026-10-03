// FUNCTION: BF2 0x6ba490
extern "C" float fn_6ba350(void* self, int a, int b, int c);

extern "C" void fn_6ba490(void* self, int arg2, int arg3, float* out)
{
    float* o = out;
    int n = 0;
    do {
        *o = fn_6ba350(self, arg2, arg3, n + 4);
        o++;
        n++;
    } while (n != 3);
}
