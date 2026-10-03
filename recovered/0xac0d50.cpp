extern "C" void fn_6a76a0(void*, int);

extern "C" int executeObjectMethod_ac0d50(void* self, void* a, void* b)
{
    switch (*(int*)((char*)self + 0x30)) {
        case 0:
            *(char*)((char*)self + 0x108) = 0;
            fn_6a76a0((void*)0x1092d80, 0);
            return 0;
        case 1: {
            int v = *(int*)(*(void**)((char*)self + 0x38));
            *(char*)((char*)self + 0x108) = 0;
            fn_6a76a0((void*)0x1092d80, v);
            return 0;
        }
        default:
            return 0;
    }
}
