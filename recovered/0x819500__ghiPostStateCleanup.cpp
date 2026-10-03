// FUNCTION: BF2 0x819500
extern void fn_407ee8(void*, void*, int, void*) __attribute__((noreturn));
extern void fn_407738(void*);
void ghiPostStateCleanup_0x819500(void* self) {
    int st = *(int*)(*(void**)self);
    if (st == 0)
        return;
    if (st == 1) {
        void* p = *(void**)((char*)self + 0x10);
        if (p)
            fn_407738(p);
        *(void**)((char*)self + 0x10) = 0;
        return;
    }
    if (st != 2)
        fn_407ee8((void*)0xbb4030, (void*)0xbb3758, 0x26c, (void*)0xbb35f0);
}
