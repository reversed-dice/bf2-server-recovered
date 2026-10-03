// FUNCTION: BF2 0x9d9ef0
// BF2_FLAGS: -fno-strict-aliasing
// ConsoleClass407::executeObjectMethod 0x9d9ef0
extern "C" {
    void* fn_69de30(unsigned id);
    void fn_59f410(void*, void*);
    void fn_59f630(void*, void*);
}

namespace dice { namespace hfe { namespace world {

long executeObjectMethod_0x9d9ef0(long p) {
    int sel = *(int*)(p + 0x30);
    if (sel != 0) goto case1_check;
    {
        *(char*)(p + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce80));
        unsigned buf3[4];
        fn_59f410(buf3, obj);
        {
        unsigned* dst = (unsigned*)(p + 0x10c);
        dst[0] = buf3[0];
        dst[1] = buf3[1];
        return (long)dst;
    }
case1_check:
    if (sel != 1) return 0;
    {
        unsigned* q = *(unsigned**)(p + 0x38);
        unsigned b = q[1];
        unsigned a = q[0];
        unsigned buf4[4];
        buf4[0] = a;
        buf4[1] = b;
        *(char*)(p + 0x108) = 0;
        void* obj = fn_69de30(*(unsigned*)(0x00c7ce80));
        fn_59f630(obj, buf4);
        return 0;
        }
    }
}

} } }
