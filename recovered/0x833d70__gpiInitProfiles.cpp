// FUNCTION: BF2 0x833d70
namespace dice { namespace hfe {
extern void* fn_83b780(int a, int b, void* c, void* d, void* e);
bool gpiInitProfiles_0x833d70(void* self) {
    void* p = *(void**)self;
    *(int*)((char*)p + 0x4bc) = 0;
    *(int*)((char*)p + 0x4b8) = 0;
    void* r = fn_83b780(0x30, 0x20, (void*)0x833ce0, (void*)0x833cf0, (void*)0x833d00);
    *(void**)((char*)p + 0x4b0) = r;
    return r != 0;
}
} }
