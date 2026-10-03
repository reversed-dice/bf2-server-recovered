// FUNCTION: BF2 0x6ff460
namespace dice { namespace hfe { namespace world {
float getLowBoundaryX_0x6ff460(void* self) {
    return (float)*(int*)((char*)self + 0x20) - (float)*(int*)((char*)self + 0x34) * *(float*)((char*)self + 0x3c);
}
} } }
