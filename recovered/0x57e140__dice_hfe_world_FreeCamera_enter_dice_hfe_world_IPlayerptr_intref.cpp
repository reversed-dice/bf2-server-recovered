// FUNCTION: BF2 0x57e140
typedef char (*vfn1)(void*);
typedef char (*vfn2)(void*);

extern "C" long enter_57e140(void* self, void* param2, int* param3)
{
    void* p = *(void**)((char*)self + 0x298);
    if (p == 0 || *(void**)((char*)p + 8) == 0) {
        char c = ((vfn1)(*(void***)self)[0x390/8])(self);
        if (c != 0) {
            c = ((vfn2)(*(void***)self)[0x210/8])(self);
            *param3 = (int)c;
            return 1;
        }
    }
    return 0;
}
