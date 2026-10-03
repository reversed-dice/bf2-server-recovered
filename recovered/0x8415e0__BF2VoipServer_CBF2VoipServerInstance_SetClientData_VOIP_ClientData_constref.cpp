// FUNCTION: BF2 0x8415e0
extern "C" int fn_848030(void);
extern "C" int sprintf_4081a8(char* buf, const char* fmt, ...);
extern "C" void* fn_846eb0(void);
extern "C" void fn_846ef0(void* o, int n, void* buf);

extern "C" int SetClientData_8415e0(void* self, void* p2)
{
    int r = fn_848030();
    char buf[512];
    if (r == 1) {
        sprintf_4081a8(buf, (const char*)0xbb7348, *(unsigned short*)((char*)p2 + 0xa), *(unsigned short*)p2);
        void* v = fn_846eb0();
        fn_846ef0(v, 0, buf);
    } else {
        sprintf_4081a8(buf, (const char*)0xbb7380, *(unsigned short*)((char*)p2 + 0xa), *(unsigned short*)p2);
        void* v = fn_846eb0();
        fn_846ef0(v, 3, buf);
    }
    return r;
}
