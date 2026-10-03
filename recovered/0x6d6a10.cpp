extern "C" void* g_props;
typedef void (*vfn1)(void*, void*);

extern "C" void* listProperties_6d6a10(void* self)
{
    ((vfn1)(*(void***)g_props)[0x58/8])(self, g_props);
    return self;
}
