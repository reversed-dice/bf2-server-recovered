// FUNCTION: BF2 0x74b850
namespace dice {
int cb_74b850(void* self, void* out) {
    if (self == 0)
        return -102;
    *(long*)((char*)out + 0x0) = *(long*)((char*)self + 0x48);
    *(long*)((char*)out + 0x8) = *(long*)((char*)self + 0x50);
    return 0;
}
}
// REVERSED_FUNCTION: unzGetGlobalInfo (0x74b850)
