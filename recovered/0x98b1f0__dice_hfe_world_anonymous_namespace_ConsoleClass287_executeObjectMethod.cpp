// FUNCTION: BF2 0x98b1f0
namespace dice { namespace hfe {
extern "C" unsigned int CID_c7d0a0;
extern "C" void* fn_69de30(unsigned int cid);
extern "C" float DAT_00b3e058;
extern "C" float DAT_00b34b68;
long eom_98b1f0(char* self) {
    if (__builtin_expect(*(int*)(self + 0x30) == 0, 1)) {
        *(char*)(self + 0x108) = 1;
        void* o = fn_69de30(CID_c7d0a0);
        *(float*)(self + 0x10c) = DAT_00b3e058 * *(float*)((char*)o + 0x2d4);
        return (long)(self + 0x10c);
    }
    if (__builtin_expect(*(int*)(self + 0x30) != 1, 0)) return 0;
    float v = *(float*)(*(char**)(self + 0x38));
    *(char*)(self + 0x108) = 0;
    void* o = fn_69de30(CID_c7d0a0);
    *(float*)((char*)o + 0x2d4) = v * DAT_00b34b68;
    return 0;
}
} }
// REVERSED_FUNCTION: 0x98b1f0