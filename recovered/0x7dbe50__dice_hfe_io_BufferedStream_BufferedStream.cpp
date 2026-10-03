// FUNCTION: BF2 0x7dbe50
namespace dice { namespace hfe { namespace io {
extern void fn_7db940(void* a);
void BufferedStream_0x7dbe50(void* self) {
    *(void**)self = (void*)0xbabcb0;
    *(void**)((char*)self + 8) = (void*)0xbabd88;
    *(void**)((char*)self + 0x10) = (void*)0xbabe10;
    *(int*)((char*)self + 0x18) = 1;
    *(void**)((char*)self + 0x20) = 0;
    *(void**)((char*)self + 0x28) = 0;
    *(void**)((char*)self + 0x30) = 0;
    fn_7db940((char*)self + 0x38);
    fn_7db940((char*)self + 0x50);
}
} } }
