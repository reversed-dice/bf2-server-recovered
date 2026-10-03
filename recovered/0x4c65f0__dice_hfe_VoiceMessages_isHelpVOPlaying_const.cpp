// FUNCTION: BF2 0x4c65f0
namespace dice { namespace hfe {
bool isHelpVOPlaying_0x4c65f0(void* self) {
    void* v = *(void**)((char*)self + 0x2178);
    if (v && ((unsigned char (*)(void*))(*(void***)v)[0xe])(v))
        return true;
    return false;
}
} }
