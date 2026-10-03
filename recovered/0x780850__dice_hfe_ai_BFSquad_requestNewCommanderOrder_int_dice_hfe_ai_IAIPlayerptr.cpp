// FUNCTION: BF2 0x780850
namespace dice { namespace hfe { namespace ai {
extern void* fn_407508(int a);
extern void fn_42e460(void* a, int b, int c, int d);
void requestNewCommanderOrder_0x780850(void* self, int a, void* b) {
    if (!((bool (*)(void*))(*(void***)b)[0x22])(b))
        return;
    int r = ((int (*)(void*))(*(void***)b)[0x1b])(b);
    void* e = fn_407508(0x18);
    fn_42e460(e, r, a, 1);
    void* fn = (*(void***)e)[0xa];
    int r2 = ((int (*)(void*))(*(void***)b)[0x7])(b);
    ((void (*)(void*, int))fn)(e, r2);
    ((void (*)(void*))(*(void***)e)[0x2])(e);
}
} } }
