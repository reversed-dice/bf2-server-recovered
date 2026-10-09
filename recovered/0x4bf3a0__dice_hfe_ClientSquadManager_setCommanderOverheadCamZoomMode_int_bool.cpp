// FUNCTION: BF2 0x4bf3a0
typedef void* (*Fn0)(void*);
typedef char  (*FnB)(void*);
typedef int   (*FnI)(void*);
typedef void  (*FnSlot)(void*, int, void*);

void* operator new(unsigned long);
void  fn_421a60(void*, int, int, int);
void  fn_4c0070(void*, int, bool);
void* fn_pm();

int setCommanderOverheadCamZoomMode(void* self, int a2, bool a3)
{
    if (*(void**)0x10c5420 == 0) return 0;
    if (*(void**)0x10b8c08 == 0) return 0;
    void* pm = *(void**)0x112ee38;
    if (pm == 0) return 0;
    void* v = ((Fn0)(*(void***)pm)[0x60 / 8])(pm);
    if (((FnB)(*(void***)v)[0x228 / 8])(v) != 0) {
        pm = *(void**)0x112ee38;
        v = ((Fn0)(*(void***)pm)[0x60 / 8])(pm);
        int x = ((FnI)(*(void***)v)[0x1d0 / 8])(v);
        pm = *(void**)0x112ee38;
        v = ((Fn0)(*(void***)pm)[0x60 / 8])(pm);
        int y = ((FnI)(*(void***)v)[0xa8 / 8])(v);
        void* ev = ::operator new(0x18);
        fn_421a60(ev, 8, x, y);
        void* g = *(void**)0x10c5420;
        ((FnSlot)(*(void***)g)[0x120 / 8])(g, -1, ev);
        fn_4c0070(self, a2, a3);
        return 1;
    }
    return 0;
}
