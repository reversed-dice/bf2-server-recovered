// FUNCTION: BF2 0x4bd800
namespace dice { namespace hfe { namespace world {
bool get_0x4bd800(void* p) {
    if (*(unsigned char*)((char*)p + 0x24d) == 0) {
        if (*(unsigned char*)((char*)p + 0x24e) == 0) return false;
    }
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_getProneOnSpawn (0x4bd800)
