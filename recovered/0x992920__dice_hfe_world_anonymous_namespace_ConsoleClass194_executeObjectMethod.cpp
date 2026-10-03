// FUNCTION: BF2 0x992920
namespace dice { namespace hfe {
extern "C" void* fn_69de30(unsigned id);
extern "C" void fn_574bf0(void*, unsigned int*, unsigned int);

long execute_992920_console_194(long p) {
    int sel = *(int*)(p + 0x30);
    unsigned d;
    if (sel == 1) goto case1;
    if (sel == 2) goto case2;
    return 0;
case2:
    {
        unsigned* q = *(unsigned**)(p + 0x38);
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        unsigned buf[3];
        buf[1] = b;
        buf[2] = c;
        buf[0] = a;
        d = *(unsigned*)*(unsigned**)(p + 0x40);
        *(char*)(p + 0x108) = 0;
tail:
        void* obj = fn_69de30(*(unsigned*)(0x00c7d0a4));
        fn_574bf0(obj, buf, d);
        return 0;
    }
case1:
    {
        unsigned* q = *(unsigned**)(p + 0x38);
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        unsigned buf2[3];
        buf2[1] = b;
        buf2[2] = c;
        buf2[0] = a;
        *(char*)(p + 0x108) = 0;
        d = *(unsigned*)(0x0108f67c);
        goto tail;
    }
}
} }