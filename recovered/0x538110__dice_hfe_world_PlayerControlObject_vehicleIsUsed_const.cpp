// FUNCTION: BF2 0x538110
namespace dice { namespace hfe { namespace world {
extern void* fn_407468(void* a);
bool vehicleIsUsed_0x538110(void* self) {
    void* end = (char*)self + 0x2c0;
    void* it = *(void**)((char*)self + 0x2d0);
    while (it != end) {
        void* p = *(void**)((char*)it + 0x28);
        if (((unsigned char (*)(void*))(*(void***)p)[0x6])(p))
            return true;
        it = fn_407468(it);
    }
    return false;
}
} } }
