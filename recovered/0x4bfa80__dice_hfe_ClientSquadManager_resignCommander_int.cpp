// FUNCTION: BF2 0x4bfa80

typedef void* (*Fn0)(void*);
typedef int   (*FnI)(void*);
typedef void  (*FnSlot)(void*, int, void*);

void* operator new(unsigned long);
void fn_421a60(void*, int, int, int);

void resignCommander(void* self, int mode)
{
    if (*(void**)0x10c5420 != 0) {
        void* g = *(void**)0x10c5420;
        FnSlot f = (FnSlot)(*(void***)g)[0x120 / 8];
        void* pm = *(void**)0x112ee38;
        void* obj = ((Fn0)(*(void***)pm)[0x60 / 8])(pm);
        int b = ((FnI)(*(void***)obj)[0xa8 / 8])(obj);
        void* ev = ::operator new(0x18);
        fn_421a60(ev, 2, mode, b);
        f(*(void**)0x10c5420, -1, ev);
    }

}
