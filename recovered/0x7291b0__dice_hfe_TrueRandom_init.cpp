// FUNCTION: BF2 0x7291b0
namespace dice { namespace hfe {

extern "C" long time(void*);
extern "C" void srand(unsigned);

void fn_0x7291b0() {
    long t = time(0);
    srand((unsigned)t);
    *(unsigned char*)0x10a4ef4 = 1;
}

} }
// REVERSED_FUNCTION: dice_hfe_TrueRandom_init (0x7291b0)
