// FUNCTION: BF2 0x4c0290
namespace dice { namespace hfe {
extern void* fn_407508(int a);
extern void fn_534660(void* a, void* b, int c);
void addOrderMarker_0x4c0290(void* self, int type, void* a) {
    ((void (*)(void*))(*(void***)self)[0x24])(self);
    if (type == 0) {
        void* e = fn_407508(0x18);
        fn_534660(e, a, 0);
        *(void**)((char*)self + 0x58) = e;
    } else if (type == 1) {
        void* e = fn_407508(0x18);
        fn_534660(e, a, 1);
        *(void**)((char*)self + 0x50) = e;
    }
}
} }
