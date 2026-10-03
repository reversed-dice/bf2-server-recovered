// FUNCTION: BF2 0x69f940
namespace dice { namespace hfe { namespace world {
extern void fn_4f1aa0(void* a, void* b);
bool readBinary_0x69f940(void* self, void* a) {
    fn_4f1aa0(a, (char*)self + 0x20);
    ((int (*)(void*, void*, int))(*(void***)a)[0x4])(a, (char*)self + 0x2c, 4);
    return true;
}
} } }
