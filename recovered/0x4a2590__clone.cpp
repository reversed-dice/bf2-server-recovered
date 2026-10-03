// FUNCTION: BF2 0x4a2590
namespace dice { namespace hfe { namespace world {
bool get_0x4bd800(void* p) {
    if (*(unsigned char*)((char*)p + 0x1e0) == 0) {
        if (*(unsigned char*)((char*)p + 0x290) == 0) return false;
    }
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_getProneOnSpawn (0x4bd800)
