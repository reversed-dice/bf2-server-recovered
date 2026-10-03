// FUNCTION: BF2 0x63b1e0
namespace dice { namespace hfe { namespace world {
bool isEffectBundle_0x63b1e0(void* obj) {
    if (!obj)
        return false;
    if (((int (*)(void*))(*(void***)obj)[0x4])(obj) == *(int*)0x00c7d098)
        return true;
    if (((int (*)(void*))(*(void***)obj)[0x4])(obj) == *(int*)0x00c7d068)
        return true;
    return false;
}
} } }
