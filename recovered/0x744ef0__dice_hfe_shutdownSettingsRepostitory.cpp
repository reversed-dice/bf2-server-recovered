// FUNCTION: BF2 0x744ef0
namespace dice { namespace hfe {
typedef void (*vf_t2)(void*, int, int);
extern "C" void shutdownSettingsRepostitory() {
    void* g = *(void**)0xb3730;
    vf_t2 f = (*(vf_t2**)g)[0x70/8];
    f(g, 5, 1);
}
} }
// REVERSED_FUNCTION: dice_hfe_shutdownSettingsRepostitory (0x744ef0)
