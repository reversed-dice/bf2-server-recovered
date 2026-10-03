// FUNCTION: BF2 0x9ce610
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, void*);
extern "C" void* fn_9bc590(void*);
extern "C" void* target_9ce450(void* self)
{
    if (__builtin_expect(*(int*)((char*)self + 0x30) == 0, 1)) {
        *(char*)((char*)self + 0x108) = 1;
        void* t = fn_9bc590(self);
        void* t2 = ((vfn1*)*(void***)t)[0x240/8](t);
        *(void**)((char*)self + 0x110) = *(void**)((char*)t2 + 0);
        *(void**)((char*)self + 0x118) = *(void**)((char*)t2 + 8);
        *(void**)((char*)self + 0x120) = *(void**)((char*)t2 + 0x10);
        return (char*)self + 0x110;
    } else {
        if (*(int*)((char*)self + 0x30) == 1) {
            void* p = *(void**)((char*)self + 0x38);
            void* tmp[3];
            tmp[0] = *(void**)((char*)p + 0);
            tmp[1] = *(void**)((char*)p + 8);
            tmp[2] = *(void**)((char*)p + 0x10);
            *(char*)((char*)self + 0x108) = 0;
            void* t = fn_9bc590(self);
            ((vfn2*)*(void***)t)[0x238/8](t, tmp);
            return 0;
        }
        return 0;
    }
}
