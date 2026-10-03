typedef int (*vfn0)(void*);

extern "C" void* getTemplate_6a0d40(void* self, void* tpl, unsigned int id)
{
    if (tpl && ((vfn0)(*(void***)tpl)[0x20/8])(tpl) == id) {
        return tpl;
    }
    return 0;
}
