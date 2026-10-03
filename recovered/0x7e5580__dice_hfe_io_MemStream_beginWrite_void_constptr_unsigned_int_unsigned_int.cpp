// FUNCTION: BF2 0x7e5580
namespace dice { namespace hfe { namespace io {
extern void fn_407a08(void* a, void* b, int c);
extern void* fn_407508(int a);
struct MBWS2 { unsigned char _pad[0x18]; void* m_18; };
void* beginWrite_0x7e5580(MBWS2* self, void* arg2, unsigned int arg3, int arg4) {
    fn_407a08((char*)self->m_18 + arg3, arg2, arg4);
    void* p = fn_407508(0x10);
    *(void**)p = (void*)0xbacc50;
    *(int*)((char*)p + 8) = 1;
    *(int*)((char*)p + 0xc) = arg4;
    return p;
}
} } }
