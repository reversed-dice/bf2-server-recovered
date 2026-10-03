// FUNCTION: BF2 0x6a0cf0
// Candidate for 0x6a0cf0 - ObjectTemplateManager::getTemplate
// ptr = vtable[0x48](self, name);
// if (ptr == null || vtable[0x20](ptr) != type) return null;
// return ptr;
// RDI=self, RSI=name, EDX=type
long getTemplate(long self, long name, int type) {
    long* vtbl = *(long**)self;
    long ptr = ((long(*)(long, long))vtbl[0x48 / 8])(self, name);
    if (ptr == 0) {
        return 0;
    }
    long* vtbl2 = *(long**)ptr;
    int result = ((int(*)(long))vtbl2[0x20 / 8])(ptr);
    if (result != type) {
        return 0;
    }
    return ptr;
}
