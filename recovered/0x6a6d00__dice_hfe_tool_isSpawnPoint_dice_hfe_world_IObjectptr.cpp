// FUNCTION: BF2 0x6a6d00
namespace dice { namespace hfe { namespace tool {
bool isSpawnPoint_0x6a6d00(void* obj) {
    if (obj) {
        void* r = ((void* (*)(void*, int))(*(void***)obj)[0x3])(obj, *(int*)0x00c76050);
        if (r)
            return true;
    }
    return false;
}
} } }
