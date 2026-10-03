extern "C" void* fn_44fff0(void*, void*, void*);

extern "C" void* getPathAndName_718ae0(void* self, void* arg)
{
    void* p = *(void**)((char*)arg + 0x18);
    fn_44fff0(self, (char*)p + 0x40, (char*)p + 0x48);
    return self;
}
