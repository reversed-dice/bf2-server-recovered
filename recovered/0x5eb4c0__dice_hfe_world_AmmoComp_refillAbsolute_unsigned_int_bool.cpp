// FUNCTION: BF2 0x5eb4c0
namespace dice { namespace hfe { namespace world {
extern bool fn_5eb250(void* a);
extern int fn_5eb0a0(void* a, int b, unsigned char c);
int refillAbsolute_0x5eb4c0(void* self, int arg2, bool arg3) {
    if (!fn_5eb250(self))
        return arg2;
    return fn_5eb0a0(self, arg2, (unsigned char)arg3);
}
} } }
