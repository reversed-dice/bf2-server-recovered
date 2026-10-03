// FUNCTION: BF2 0x6ff440
namespace dice { namespace hfe { namespace world {
float getHighBoundaryX_0x6ff480(void* self) {
    return (float)*(int*)((char*)self + 0x24) + (float)*(int*)((char*)self + 0x38) * *(float*)((char*)self + 0x44);
}
} } }
