// FUNCTION: BF2 0x4bbc60
namespace dice { namespace hfe { namespace world {
bool get_0x4bbc60(void* p) {
    if (*(unsigned char*)((char*)*(void**)((char*)p + 0x228) + 0x8d) == 0) {
        if (*(unsigned char*)((char*)p + 0x24c) == 0) return false;
    }
    return true;
}
} } }
// REVERSED_FUNCTION: dice_hfe_SpawnPoint_getEnterOnSpawn (0x4bbc60)
