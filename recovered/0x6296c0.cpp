extern "C" void base_ctor_62bda0(void*);

extern "C" void ctor_6296c0(void* self, void* tpl)
{
    base_ctor_62bda0(self);
    *(void**)((char*)self + 0x48) = tpl;
    *(void**)((char*)self + 0x0) = (void*)0xb7fa70;
    *(void**)((char*)self + 0x20) = (void*)0xb7fc38;
    *(int*)((char*)self + 0x30) = 1;
    *(int*)((char*)self + 0x34) = 0;
    *(int*)((char*)self + 0x38) = 0;
    *(char*)((char*)self + 0x3c) = 0;
    *(char*)((char*)self + 0x3d) = 0;
    *(char*)((char*)self + 0x3e) = 0;
    *(int*)((char*)self + 0x40) = 0;
    *(char*)((char*)self + 0x44) = 0;
}
