// FUNCTION: BF2 0x58e190
namespace dice { namespace hfe { namespace world {

void fn_0x58e190(void* self) {
    void* node = (char*)self + 0x8;
    *(void**)((char*)node + 0x8) = node;
    *(void**)((char*)self + 0x8) = node;
    *(unsigned char*)self = 0;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SimpleSoundTemplate_SimpleSoundTemplate (0x58e190)
