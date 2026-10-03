// FUNCTION: BF2 0x57d150
namespace dice { namespace hfe { namespace world {
bool enter_0x57d150(void* self, void* p) {
    void* e = *(void**)((char*)self + 0x240);
    if (e && ((unsigned char (*)(void*))(*(void***)e)[0x6])(e))
        return false;
    return true;
}
} } }
