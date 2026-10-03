// FUNCTION: BF2 0x6ff4a0
namespace dice { namespace hfe { namespace world {
float getLowBoundaryZ_0x6ff4a0(void* self) {
    return (float)*(int*)((char*)self + 0x24) - (float)*(int*)((char*)self + 0x38) * *(float*)((char*)self + 0x44);
}
} } }
