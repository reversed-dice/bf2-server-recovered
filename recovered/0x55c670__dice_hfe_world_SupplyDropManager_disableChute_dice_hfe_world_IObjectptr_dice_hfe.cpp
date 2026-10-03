// FUNCTION: BF2 0x55c670
namespace dice { namespace hfe { namespace world {
int fn_0x55c670(void* self, int dummy, void* obj) {
    if (!obj)
        return 0;
    ((void (*)(void*, int, int))(*(void***)obj)[0x18])(obj, 1, 0);
    return 1;
}
} } }
