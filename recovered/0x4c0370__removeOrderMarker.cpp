// FUNCTION: BF2 0x4c0370
namespace dice { namespace hfe {
// 0x4c0370 removeOrderMarker
extern "C" void fn_5338a0(void*);   // OrderMarker dtor
extern "C" void operator_delete(void*);
void removeOrderMarker_0x4c0370(void* self, int mode) {
    if (mode == 0) {
        void* m = *(void**)((char*)self + 0x58);
        if (m) {
            fn_5338a0(m);
            operator_delete(m);
            *(void**)((char*)self + 0x58) = 0;
        }
    } else if (mode == 1) {
        void* m = *(void**)((char*)self + 0x50);
        if (m) {
            fn_5338a0(m);
            operator_delete(m);
            *(void**)((char*)self + 0x50) = 0;
        }
    }
}
} }
