namespace dice { namespace hfe {

extern "C" void NetworkableBase_ctor(void*);

extern "C" void ctor_5dafb0(void* param_1) {
    NetworkableBase_ctor(param_1);
    char* base = (char*)param_1 + 0x50;
    *(void* volatile*)(base + 0) = (void*)0xb6d860;
    *(void* volatile*)(base + 0x10) = (void*)0;
    *(volatile int*)(base + 0x8) = -1;
    *(volatile unsigned char*)(base + 0x18) = 0;
    *(volatile unsigned int*)(base + 0x1c) = 0xffffffff;
    *(void**)param_1 = (void*)0xb6d7b0;
    *(unsigned int*)((char*)param_1 + 0x70) = 1;
    *(void**)((char*)param_1 + 0x78) = (void*)0;
}
} }
