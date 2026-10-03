// FUNCTION: BF2 0x6ff480
namespace dice { namespace hfe { namespace world {
float getHighBoundaryX_0x6ff480(void* self) {
    return (float)*(int*)((char*)self + 0x20) + (float)*(int*)((char*)self + 0x34) * *(float*)((char*)self + 0x3c);
}
} } }
