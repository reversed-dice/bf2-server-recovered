extern "C" void* fn_83eef0(unsigned int);
extern "C" void* fn_83b5e0(int, int, int, void*, void*, void*);
extern "C" void fn_83ef10(void*);

extern "C" void* SBAllocServer_8258d0(void* self, int a, int b)
{
    void* nb = fn_83eef0(0x38);
    if (nb) {
        void* inner = fn_83b5e0(0x10, 0x8, 0x4, (void*)0x8258a0, (void*)0x8258b0, (void*)0x825880);
        *(void**)((char*)nb + 0x18) = inner;
        if (inner) {
            *(char*)((char*)nb + 0x14) = 0;
            *(char*)((char*)nb + 0x15) = 0;
            *(void**)((char*)nb + 0x28) = 0;
            *(int*)((char*)nb + 0x20) = 0;
            *(int*)((char*)nb + 0x10) = 0;
            *(int*)nb = a;
            *(short*)((char*)nb + 0x4) = b;
            *(int*)((char*)nb + 0x8) = 0;
            *(short*)((char*)nb + 0xc) = 0;
        } else {
            fn_83ef10(nb);
            nb = 0;
        }
    }
    return nb;
}
