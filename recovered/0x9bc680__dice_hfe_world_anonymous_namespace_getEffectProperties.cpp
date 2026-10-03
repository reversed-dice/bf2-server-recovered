// FUNCTION: BF2 0x9bc680
namespace dice { namespace hfe { namespace world {
extern "C" unsigned int g_c7d098;
extern "C" unsigned int g_c7d064;
extern "C" unsigned int g_c7d068;
extern "C" void* fn_69de30(unsigned int cid);
char* eom_9bc680(void) {
    void* a = fn_69de30(g_c7d098);
    if (a != 0) {
        return (char*)a + 0x1f8;
    }
    void* b = fn_69de30(g_c7d064);
    if (b != 0) {
        return (char*)b + 0x1c8;
    }
    void* c = fn_69de30(g_c7d068);
    if (c != 0) {
        return (char*)c + 0x1c8;
    }
    return (char*)b;
}
} } }
// REVERSED_FUNCTION: test (0x9bc680)
