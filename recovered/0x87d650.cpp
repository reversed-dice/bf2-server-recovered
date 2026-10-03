extern "C" void* g_108d650;

extern "C" int executeObjectMethod_87d650(void* self, void* a, void* b)
{
    if (*(int*)((char*)self + 0x30) == 1) {
        unsigned char v = *(unsigned char*)(*(void**)((char*)self + 0x38));
        *(char*)((char*)self + 0x108) = 0;
        *(char*)((char*)g_108d650 + 0x20) = v;
    }
    return 0;
}
