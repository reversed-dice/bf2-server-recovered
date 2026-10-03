// FUNCTION: BF2 0x7e19f0
namespace dice { namespace hfe { namespace io {
extern void fn_453640(void* a);
void removeAllPaths_0x7e19f0(void* self) {
    void* p = (char*)self + 0xa8;
    fn_453640(p);
    *(void**)p = p;
    *(void**)((char*)p + 8) = p;
}
} } }
