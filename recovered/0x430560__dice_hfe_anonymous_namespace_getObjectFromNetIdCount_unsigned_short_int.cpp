// FUNCTION: BF2 0x430560
namespace dice { namespace hfe {
extern void* fn_7c62b0(void* a, int b);
extern void* fn_4304b0(void* a, int b, void* c);
void* getObjectFromNetIdCount_0x430560(unsigned short arg1, int arg2) {
    void* p = fn_7c62b0(*(void**)0x10aebe8, (int)arg1);
    if (!p)
        return 0;
    int v = 0;
    void* q = fn_4304b0(p, arg2, &v);
    return q;
}
} }
