// FUNCTION: BF2 0x5bd8d0
namespace dice { namespace hfe { namespace world {

void fn_0x5bd8d0(void* self) {
    float half = 0.5f;
    *(long*)self = 0xb69730;
    *(long*)((char*)self + 0x8) = 0xb697f0;
    *(int*)((char*)self + 0x10) = 1;
    *(unsigned char*)((char*)self + 0x14) = 1;
    *(long*)((char*)self + 0x18) = 0xf6c6e8;
    *(long*)((char*)self + 0x20) = 0xf6c6e8;
    *(unsigned*)((char*)self + 0x28) = 0x3d4ccccd;
    *(unsigned*)((char*)self + 0x2c) = 0x3dcccccd;
    *(float*)((char*)self + 0x30) = half;
    *(float*)((char*)self + 0x34) = half;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PostProcessCompTemplate_PostProcessCompTemplate (0x5bd8d0)
