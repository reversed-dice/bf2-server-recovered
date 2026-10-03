// FUNCTION: BF2 0x7d66e0
namespace dice { namespace hfe { namespace io {
extern void* fn_407508(int a);
extern void fn_7d6880(void* a, int b, void* c, void* d);
extern void fn_74af30(void* a);
void ctor_0x7d66e0(void* self) {
    *(void**)self = 0;
    *(void**)((char*)self + 8) = 0;
    *(void**)((char*)self + 0x10) = 0;
    void* e = fn_407508(8);
    *(void**)self = e;
    *(void**)((char*)self + 8) = e;
    *(void**)((char*)self + 0x10) = (char*)e + 8;
    char buf[0x10];
    *(void**)&buf = 0;
    fn_7d6880(e, 1, &buf, (char*)&buf + 0xf);
    *(void**)((char*)self + 8) = (char*)*(void**)self + 8;
    fn_74af30((char*)self + 0x18);
}
} } }
