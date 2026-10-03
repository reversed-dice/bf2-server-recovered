// FUNCTION: BF2 0x4fe350
extern "C" void operator delete(void* p);

extern "C" void fn_4fe350(void* self, void* node)
{
    while (node) {
        fn_4fe350(self, *(void**)((char*)node + 0x18));
        int* p = *(int**)((char*)node + 0x20);
        void* right = *(void**)((char*)node + 0x10);
        if (p && --*p == 0)
            operator delete(p);
        operator delete(node);
        node = right;
    }
}
