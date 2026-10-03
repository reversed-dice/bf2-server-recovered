// FUNCTION: BF2 0x50dd20
namespace dice { namespace hfe {
void eom_50dd20(char* self, float* v) {
    if (v[0] > *(float*)(self + 0xc)) *(float*)(self + 0xc) = v[0];
    if (v[0] < *(float*)(self + 0x0)) *(float*)(self + 0x0) = v[0];
    if (v[1] > *(float*)(self + 0x10)) *(float*)(self + 0x10) = v[1];
    if (v[1] < *(float*)(self + 0x4)) *(float*)(self + 0x4) = v[1];
    if (v[2] > *(float*)(self + 0x14)) *(float*)(self + 0x14) = v[2];
    if (v[2] < *(float*)(self + 0x8)) *(float*)(self + 0x8) = v[2];
    *(char*)(self + 0x20) = 1;
}
} }
// REVERSED_FUNCTION: test (0x50dd20)
