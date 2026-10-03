// FUNCTION: BF2 0x9d9120
namespace dice { namespace hfe {
extern "C" void* fn_69de30(unsigned id);
extern "C" void fn_592310(void*, void*);
extern "C" void fn_591e50(void*, void*);

long execute_9d9120_console_93(long p) {
    int sel = *(int*)(p + 0x30);
    unsigned buf3[3];
    unsigned buf4[3];
    if (sel != 0) goto not_zero;
    {
        *(char*)(p + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7d05c));
        fn_592310(buf3, obj);
        unsigned* dst = (unsigned*)(p + 0x10c);
        dst[0] = buf3[0];
        dst[1] = buf3[1];
        dst[2] = buf3[2];
        return (long)dst;
    }
not_zero:
    if (sel != 1) return 0;
    {
        unsigned* q = *(unsigned**)(p + 0x38);
        unsigned c = q[2];
        unsigned b = q[1];
        unsigned a = q[0];
        buf4[1] = b;
        buf4[2] = c;
        buf4[0] = a;
        *(char*)(p + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7d05c));
        fn_591e50(obj, buf4);
        return 0;
    }
}
} }