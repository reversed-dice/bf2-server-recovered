// FUNCTION: BF2 0x5ad660
namespace dice { namespace hfe { namespace world {
extern void fn_58f5e0(void* a);
extern int fn_5acef0(void);
void handleVisualUpdate_0x58fc40(void* self, float a, unsigned b) {
    fn_58f5e0(self);
    int t = fn_5acef0() + 0x1e;
    *(int*)((char*)self + 0x2cc) = t;
    ((void (*)(void*, int, int))(*(void***)self)[0x18])(self, 0x800, 0);
}
} } }
