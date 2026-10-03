// FUNCTION: BF2 0x8df000
namespace dice { namespace hfe { namespace world {
extern void* fn_h_00699ee0(int g1, int g2);
void* cb_8df000(void* p) {
    if (*(int*)((char*)p + 0x30) == 0) {
        *(char*)((char*)p + 0x108) = 1;
        void* q = fn_h_00699ee0(*(int*)0x00c7d010, *(int*)0x00c75dc4);
        *(char*)((char*)p + 0x10a) = *(char*)((char*)q + 0x48);
        return (char*)p + 0x10a;
    }
    if (*(int*)((char*)p + 0x30) != 1)
        return 0;
    *(char*)((char*)p + 0x108) = 0;
    void* q = fn_h_00699ee0(*(int*)0x00c7d010, *(int*)0x00c75dc4);
    *(char*)((char*)q + 0x48) = 1;
    return 0;
}
} } }
