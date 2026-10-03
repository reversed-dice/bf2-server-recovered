// FUNCTION: BF2 0x4a2ae0
extern "C" void operator delete(void* p);

extern "C" void fn_4a2ae0(void* self, void* node)
{
    while (node) {
        fn_4a2ae0(self, *(void**)((char*)node + 0x18));
        int* p = *(int**)((char*)node + 0x20);
        void* right = *(void**)((char*)node + 0x10);
        if (p && --*p == 0)
            operator delete(p);
        operator delete(node);
        node = right;
    }
}
