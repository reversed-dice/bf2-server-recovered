// FUNCTION: BF2 0x8025b0
namespace dice { namespace hfe { namespace io {
extern "C" int fn_407698(int v);
void eom_8025b0(char* self, char* src) {
    *(volatile int*)(self + 0x8) = 1;
    int v10 = *(int*)(src + 0x10);
    *(void* volatile*)(self + 0x18) = (void*)0xf6c6e8;
    *(void* volatile*)(self + 0x0) = (void*)0xbafcb0;
    *(volatile int*)(self + 0xc) = -1;
    *(volatile int*)(self + 0x10) = v10;
    *(volatile int*)(self + 0x20) = *(int*)(src + 0x20);
    *(void* volatile*)(self + 0x28) = *(void**)(src + 0x28);
    *(volatile int*)(self + 0xc) = fn_407698(*(int*)(src + 0xc));
    char* p = *(char**)(self + 0x28);
    *(int*)(p + 0xc) += 1;
}
} } }
// REVERSED_FUNCTION: test (0x8025b0)
