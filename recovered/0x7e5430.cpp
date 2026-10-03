extern "C" void fn_7e53f0(void*);

extern "C" void setSize_7e5430(void* self, unsigned int size)
{
    if (*(unsigned int*)((char*)self + 0x24) < size) {
        fn_7e53f0(self);
    }
    *(unsigned int*)((char*)self + 0x20) = size;
    if (size < *(unsigned int*)((char*)self + 0x28)) {
        *(unsigned int*)((char*)self + 0x28) = size;
    }
}
