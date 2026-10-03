// FUNCTION: BF2 0x7b6f70
namespace dice { namespace hfe { namespace io {
extern void* fn_407508(int a);
extern void fn_7a32e0(void* a, void* b, int c, int d, int e);
void ctor_0x7b6f70(void* self, void* a, bool b) {
    if (b) {
        void* e = fn_407508(8);
        fn_7a32e0(e, a, 0, 2, 0);
        *(void**)self = e;
    } else {
        void* e = fn_407508(8);
        fn_7a32e0(e, a, 2, 0, 0);
        *(void**)self = e;
    }
}
} } }
