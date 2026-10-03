// FUNCTION: BF2 0x4a4160
namespace dice { namespace hfe {
int selectSpawnGroup_0x4a4160(void* self, void* group, int arg3) {
    if (!group)
        return 0;
    ((int (*)(void*, int))(*(void***)group)[0x55])(group, arg3);
    return 1;
}
} }
