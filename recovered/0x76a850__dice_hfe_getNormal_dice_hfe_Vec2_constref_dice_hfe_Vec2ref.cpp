// FUNCTION: BF2 0x76a850
namespace dice { namespace hfe {
void* getNormal_0x76a850(void* a, void* out) {
    float x = *(float*)((char*)a + 0);
    int y = *(int*)((char*)a + 4);
    float nx = -x;
    *(int*)((char*)out + 0) = y;
    *(float*)((char*)out + 4) = nx;
    return out;
}
} }
