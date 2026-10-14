// FUNCTION: BF2 0x524b70
namespace dice { namespace hfe {
extern "C" void fn_5767f0(void* p);
void eom_524b70(char* self) {
    fn_5767f0(self);
    char* a = self + 0x218;
    *(void* volatile*)(self + 0x0) = (void*)0xb44150;
    *(void* volatile*)(self + 0x10) = (void*)0xb44400;
    *(void* volatile*)(self + 0x68) = (void*)0xb44438;
    *(void* volatile*)(self + 0x1c8) = (void*)0xb444b8;
    *(void* volatile*)(self + 0x1f8) = (void*)0xb44520;
    *(volatile int*)(self + 0x200) = 1;
    *(volatile int*)(self + 0x204) = 0;
    *(volatile int*)(self + 0x208) = -1;
    *(volatile int*)(self + 0x20c) = -1;
    *(volatile int*)(self + 0x210) = 0;
    *(void* volatile*)(self + 0x218) = (void*)a;
    *(void* volatile*)(a + 0x8) = (void*)a;
}
} }
