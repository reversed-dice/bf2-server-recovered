// FUNCTION: BF2 0x435f00
extern "C" void clear_list_4361b0(void* self);
extern "C" void fn_43b430(void* self, void* buf);

struct Buf435f00 {
    int data[64];
    long a;
    long b;
    char c;
};

extern "C" void clear_435f00(void* self, int param2)
{
    clear_list_4361b0(self);
    *(void**)((char*)self + 0) = self;
    *(void**)((char*)self + 8) = self;
    *(int*)((char*)self + 0x10) = param2;
    *(int*)((char*)self + 0x14) = param2;
    *(int*)((char*)self + 0x18) = param2;
    Buf435f00 b;
    b.a = 0;
    b.b = 0;
    b.c = 0;
    for (long i = 0; i != 64; i++) {
        b.data[i] = 0;
    }
    fn_43b430((char*)self + 0x18, &b);
}
