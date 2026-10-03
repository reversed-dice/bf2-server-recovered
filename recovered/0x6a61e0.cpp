extern "C" void fn_6a52e0(void*, void**);

extern "C" void unSub_0x6a61e0(void* self, unsigned int idx, void* ev)
{
    void* e = *(void**)((char*)(*(void**)((char*)self + 0x40)) + (unsigned long)idx * 8);
    void** p = &ev;
    fn_6a52e0(e, p);
}
