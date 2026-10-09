// FUNCTION: BF2 0x4bf4b0

typedef void* (*Fn0)(void*);
typedef void* (*Fn1)(void*, int);
typedef int   (*FnI)(void*);
typedef char  (*FnB)(void*);
typedef void  (*FnVI)(void*, int);
typedef void  (*FnVVI)(void*, int, void*);

void* operator new(unsigned long);
void fn_421a60(void*, int, int, int);

int setCommanderToOverheadCamMode(void* self, int mode)
{
    if (*(void**)0x10c5420 != 0 && *(void**)0x10b8c08 != 0 && *(void**)0x112ee38 != 0) {
        void* pm = *(void**)0x112ee38;
        void* pl = ((Fn0)(*(void***)pm)[0x60 / 8])(pm);
        if (((FnB)(*(void***)pl)[0x228 / 8])(pl)) {
            void* pmA = *(void**)0x112ee38;
            void* objA = ((Fn0)(*(void***)pmA)[0x60 / 8])(pmA);
            int a = ((FnI)(*(void***)objA)[0x1d0 / 8])(objA);
            void* pmB = *(void**)0x112ee38;
            void* objB = ((Fn0)(*(void***)pmB)[0x60 / 8])(pmB);
            int b = ((FnI)(*(void***)objB)[0xa8 / 8])(objB);
            void* ev = ::operator new(0x18);
            fn_421a60(ev, 7, a, b);
            void* g = *(void**)0x10c5420;
            ((FnVVI)(*(void***)g)[0x120 / 8])(g, -1, ev);
            void* pmC = *(void**)0x112ee38;
            void* r = ((Fn1)(*(void***)pmC)[0x40 / 8])(pmC, mode);
            if (r != 0)
                ((FnVI)(*(void***)r)[0x170 / 8])(r, 1);
            return 1;
        }
    }
    return 0;
}
