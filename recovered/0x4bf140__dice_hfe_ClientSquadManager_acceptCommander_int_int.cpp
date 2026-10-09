// FUNCTION: BF2 0x4bf140

typedef void (*FnSlot)(void*, int, void*);

void* operator new(unsigned long);
void  fn_421a60(void*, int, int, int);

void acceptCommander(void* self, int a, int b)
{
    if (*(void**)0x10c5420 != 0) {
        void* g = *(void**)0x10c5420;
        FnSlot f = (FnSlot)(*(void***)g)[0x120 / 8];
        void* ev = ::operator new(0x18);
        fn_421a60(ev, 0, a, b);
        f(*(void**)0x10c5420, -1, ev);
    }
}
