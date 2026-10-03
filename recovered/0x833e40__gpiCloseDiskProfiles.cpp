// FUNCTION: BF2 0x833e40
namespace dice { namespace hfe {
extern void fn_407738(void* a);
void gpiCloseDiskProfiles_0x833e40(void* self) {
    void* p = *(void**)self;
    void* q = *(void**)((char*)p + 0x4a0);
    fn_407738(q);
    *(void**)((char*)p + 0x4a0) = 0;
}
} }
