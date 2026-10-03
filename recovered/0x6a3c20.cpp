extern "C" void fn_6a52e0(void*, void**);

extern "C" void unSubscribe_6a3c20(void* self, unsigned int idx, void* ev)
{
    void* e = *(void**)((char*)(*(void**)((char*)self + 0x70)) + (unsigned long)idx * 8);
    void** p = &ev;
    fn_6a52e0(e, p);
}
