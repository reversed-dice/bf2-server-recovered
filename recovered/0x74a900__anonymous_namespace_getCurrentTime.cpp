// FUNCTION: BF2 0x74a900
struct timeval { long tv_sec; long tv_usec; };
extern "C" int gettimeofday(timeval*, void*);
extern "C" int* __errno_location(void);
extern "C" int strerror_r(int, char*, unsigned long);

// compile-state padding: 7 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 0 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 2 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 4 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 6 + 3; return y; }
long getCurrentTime()
{
    static timeval tv;
    static long old;
    if (gettimeofday(&tv, 0) == -1)
    {
        char buf[256];
        strerror_r(*__errno_location(), buf, 256);
    }
    old = tv.tv_sec * 1000000 + tv.tv_usec;
    return old;
}
