// FUNCTION: BF2 0x9d9e60
// BF2_FLAGS: -fno-strict-aliasing
// ConsoleClass405::executeObjectMethod 0x9d9e60
extern "C" {
    void* fn_69de30(unsigned id);
    void fn_5aa5b0(void*, void*);
    void fn_5aa8a0(void*, void*);
}

namespace dice { namespace hfe { namespace world {

long executeObjectMethod_0x9d9e60(long p) {
    int sel = *(int*)(p + 0x30);
    if (sel != 0) goto case1_check;
    {
        *(char*)(p + 0x108) = 1;
        void* obj = fn_69de30(*(unsigned*)(0x00c7d05c));
        unsigned buf3[4];
        fn_5aa5b0(buf3, obj);
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
        void* obj = fn_69de30(*(unsigned*)(0x00c7d05c));
        fn_5aa8a0(obj, buf4);
        return 0;
        }
    }
}

} } }
