// FUNCTION: BF2 0x4b5960
// dice::hfe::world::MaterialManager::getMaterialPtr(unsigned) -- 0x4b5960
//
// Looks the id up in the map at +0x10 and returns the mapped pointer. On a
// miss, id 0 returns null and any other id returns whatever the virtual at
// +0x48 (the loader) hands back.

extern "C" char* mapFind_4b5960(void* tree, const unsigned* key);

typedef void* (*FnLoad_4b5960)(void*, int);

extern "C" void* getMaterialPtr_4b5960(char* self, unsigned id)
{
    unsigned key = id;
    char* node = mapFind_4b5960(self + 0x10, &key);
    if (node != self + 0x18) return *(void**)(node + 0x28);
    if (key == 0) return 0;
    // the loader's own result is returned: the tail jumps straight to the
    // shared epilogue with RAX still holding it
    return (*(FnLoad_4b5960*)(*(char**)self + 0x48))(self, 0);
}
// REVERSED_FUNCTION: dice_hfe_world_MaterialManager_getMaterialPtr_unsigned_int (0x4b5960)
