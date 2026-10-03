// FUNCTION: BF2 0x85b530
namespace dice { namespace hfe { namespace io {
extern unsigned char fn_h_00850930(int a1, int a2, float a3);
void* cb_85b530(void* p) {
    if (*(int*)((char*)p + 0x30) != 0x3)
        return 0;
    int a1 = **(int**)((char*)p + 0x38);
    int a2 = **(int**)((char*)p + 0x40);
    float a3 = **(float**)((char*)p + 0x48);
    *(char*)((char*)p + 0x108) = 1;
    unsigned char v = fn_h_00850930(a1, a2, a3);
    *(char*)((char*)p + 0x10a) = v;
    return (char*)p + 0x10a;
}
} } }
